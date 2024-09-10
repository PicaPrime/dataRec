#include "MP4Recovery.h"
#include <fstream>
#include <iostream>

const std::vector<unsigned char> MP4_SIGNATURE = { 0x00, 0x00, 0x00, 0x18, 0x66, 0x74, 0x79, 0x70 };
const std::vector<unsigned char> AVI_SIGNATURE = { 0x52, 0x49, 0x46, 0x46 };
const std::vector<unsigned char> MKV_SIGNATURE = { 0x1A, 0x45, 0xDF, 0xA3 };
const std::vector<unsigned char> MOV_SIGNATURE = { 0x00, 0x00, 0x00, 0x14, 0x66, 0x74, 0x79, 0x70, 0x71, 0x74 };


MP4Recovery::MP4Recovery(const std::string& outputDir) : outputDirectory(outputDir), fileCount(0) {}

bool MP4Recovery::compareSignature(const unsigned char* data, const std::vector<unsigned char>& signature) {
    for (size_t i = 0; i < signature.size(); i++) {
        if (data[i] != signature[i]) {
            return false;
        }
    }
    return true;
}

void MP4Recovery::writeRecoveredFile(DiskScanner& scanner, unsigned char* buffer, DWORD bytesRead, DWORD startOffset, const std::string& originalFileName) {
    std::string fileName = outputDirectory + "\\" + originalFileName + ".mp4"; // Use original file name if available
    std::ofstream outFile(fileName, std::ios::binary);

    if (outFile.is_open()) {
        outFile.write(reinterpret_cast<char*>(buffer + startOffset), bytesRead - startOffset);

        LARGE_INTEGER offset;
        offset.QuadPart = startOffset + bytesRead;

        while (scanner.readSector(buffer, bytesRead, bytesRead, offset)) {
            outFile.write(reinterpret_cast<char*>(buffer), bytesRead);
            offset.QuadPart += bytesRead;
        }

        outFile.close();
        std::cout << "Recovered file: " << fileName << std::endl;
    } else {
        std::cerr << "Error opening output file: " << fileName << std::endl;
    }
}

void MP4Recovery::recoverMP4(DiskScanner& scanner) {
    const DWORD bufferSize = 4096;
    unsigned char buffer[bufferSize];
    DWORD bytesRead;

    LARGE_INTEGER offset;
    offset.QuadPart = 0;

    while (scanner.readSector(buffer, bufferSize, bytesRead, offset)) {
        std::cout << "Check Secto : "<< bytesRead <<  std::endl;
        for (DWORD i = 0; i < bytesRead - MP4_SIGNATURE.size(); i++) {
            if (compareSignature(buffer + i, MP4_SIGNATURE)) {
                std::string originalFileName = scanner.getFileNameAtOffset(offset);  // Get original filename if possible
                if (originalFileName.empty()) {
                    originalFileName = "recovered_" + std::to_string(fileCount++);  // Fallback if no name is found
                }
                writeRecoveredFile(scanner, buffer, bytesRead, i, originalFileName);
            }
        }
        offset.QuadPart += bufferSize;
    }
}



