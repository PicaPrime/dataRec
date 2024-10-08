#ifndef DISKSCANNER_H
#define DISKSCANNER_H

#include <string>
#include <windows.h>

class DiskScanner {
public:
    // Constructor that accepts the drive path (e.g., "\\\\.\\C:")
    DiskScanner(const std::string& drive);

    // Opens the drive for reading
    bool openDrive();

    // Reads a sector from the drive
    bool readSector(unsigned char* buffer, DWORD bufferSize, DWORD& bytesRead, LARGE_INTEGER offset);

    // Closes the drive
    void closeDrive();

    // Retrieves the filename at a given offset (e.g., NTFS or FAT32)
    std::string getFileNameAtOffset(LARGE_INTEGER offset);

private:
    // Helper functions to determine the file system type
    bool isNTFS();
    bool isFAT32();
    bool isDeletedFile(const BYTE* filename);

    // Helper functions to retrieve filenames from NTFS and FAT32 file systems
    std::string getFileNameFromNTFS(LARGE_INTEGER offset);
    std::string getFileNameFromFAT32(LARGE_INTEGER offset);

    // Private members
    std::string drivePath;       // The path to the drive (e.g., "\\\\.\\C:")
    HANDLE hDrive;               // Handle to the open drive
};

#endif // DISKSCANNER_H
