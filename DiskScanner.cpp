#include "DiskScanner.h"
#include <windows.h>
#include <iostream>
#include <string>

struct NTFS_MFT_ENTRY {
    bool isDeleted;
    LARGE_INTEGER fileStartOffset;
    char filename[256];
};

struct FAT32_DIR_ENTRY {
    BYTE filename[11];
    BYTE attr;
    BYTE reserved;
    BYTE createTimeTenth;
    WORD createTime;
    WORD createDate;
    WORD lastAccessDate;
    WORD firstClusterHigh;
    WORD writeTime;
    WORD writeDate;
    WORD firstClusterLow;
    DWORD fileSize;
};

DiskScanner::DiskScanner(const std::string& drive) : drivePath(drive), hDrive(INVALID_HANDLE_VALUE) {}

bool DiskScanner::openDrive() {
    hDrive = CreateFileA(drivePath.c_str(), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);

    if (hDrive == INVALID_HANDLE_VALUE) {
        DWORD errorCode = GetLastError();
        std::cerr << "Error opening drive: " << errorCode << std::endl;
        return false;
    }
    std::cout << "Disk Open : "<< drivePath.c_str() <<  std::endl;
    return true;
}

bool DiskScanner::readSector(unsigned char* buffer, DWORD bufferSize, DWORD& bytesRead, LARGE_INTEGER offset) {
    if (!SetFilePointerEx(hDrive, offset, NULL, FILE_BEGIN)) {
        std::cerr << "Error setting file pointer: " << GetLastError() << std::endl;
        return false;
    }

    if (!ReadFile(hDrive, buffer, bufferSize, &bytesRead, NULL) || bytesRead == 0) {
        std::cerr << "Error reading from drive: " << GetLastError() << std::endl;
        return false;
    }

    return true;
}

void DiskScanner::closeDrive() {
    if (hDrive != INVALID_HANDLE_VALUE) {
        CloseHandle(hDrive);
        hDrive = INVALID_HANDLE_VALUE;
    }
}

std::string DiskScanner::getFileNameAtOffset(LARGE_INTEGER offset) {
    if (isNTFS()) {
        return getFileNameFromNTFS(offset);
    } else if (isFAT32()) {
        return getFileNameFromFAT32(offset);
    } else {
        return "";
    }
}

bool DiskScanner::isNTFS() {
    unsigned char buffer[512];
    DWORD bytesRead;
    LARGE_INTEGER offset;
    offset.QuadPart = 0;

    if (!readSector(buffer, sizeof(buffer), bytesRead, offset)) {
        return false;
    }

    return buffer[3] == 'N' && buffer[4] == 'T' && buffer[5] == 'F' && buffer[6] == 'S';
}

bool DiskScanner::isFAT32() {
    unsigned char buffer[512];
    DWORD bytesRead;
    LARGE_INTEGER offset;
    offset.QuadPart = 0;

    if (!readSector(buffer, sizeof(buffer), bytesRead, offset)) {
        return false;
    }

    return buffer[82] == 'F' && buffer[83] == 'A' && buffer[84] == 'T' && buffer[85] == '3' && buffer[86] == '2';
}

bool DiskScanner::isDeletedFile(const BYTE* filename) {
    return filename[0] == 0xE5;
}

std::string DiskScanner::getFileNameFromNTFS(LARGE_INTEGER offset) {
    const DWORD bufferSize = 1024;
    unsigned char buffer[bufferSize];
    DWORD bytesRead;
    LARGE_INTEGER mftOffset;
    mftOffset.QuadPart = 0;

    while (readSector(buffer, bufferSize, bytesRead, mftOffset)) {
        NTFS_MFT_ENTRY* entry = reinterpret_cast<NTFS_MFT_ENTRY*>(buffer);

        for (DWORD i = 0; i < bytesRead; i += sizeof(NTFS_MFT_ENTRY), entry++) {
            if (entry->fileStartOffset.QuadPart == offset.QuadPart) {
                if (entry->isDeleted) {
                    std::cout << "Found deleted file: " << entry->filename << std::endl;
                    return std::string(entry->filename);
                }
            }
        }

        mftOffset.QuadPart += bytesRead;
    }

    std::cerr << "Deleted file not found at the given offset." << std::endl;
    return "";
}

std::string DiskScanner::getFileNameFromFAT32(LARGE_INTEGER offset) {
    const DWORD bufferSize = 512;
    unsigned char buffer[bufferSize];
    DWORD bytesRead;
    LARGE_INTEGER dirOffset;
    dirOffset.QuadPart = 0;

    while (readSector(buffer, bufferSize, bytesRead, dirOffset)) {
        FAT32_DIR_ENTRY* entry = reinterpret_cast<FAT32_DIR_ENTRY*>(buffer);

        for (DWORD i = 0; i < bytesRead; i += sizeof(FAT32_DIR_ENTRY), entry++) {
            if (isDeletedFile(entry->filename)) {
                DWORD startCluster = (entry->firstClusterHigh << 16) | entry->firstClusterLow;
                LARGE_INTEGER fileStartOffset;
                fileStartOffset.QuadPart = static_cast<LONGLONG>(startCluster) * 4096;

                if (fileStartOffset.QuadPart == offset.QuadPart) {
                    std::string filename(reinterpret_cast<char*>(entry->filename), 11);
                    std::cout << "Found deleted file: " << filename << std::endl;
                    return filename;
                }
            }
        }

        dirOffset.QuadPart += bufferSize;
    }

    std::cerr << "Deleted file not found at the given offset." << std::endl;
    return "";
}
