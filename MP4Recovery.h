#ifndef MP4RECOVERY_H
#define MP4RECOVERY_H

#include "DiskScanner.h"
#include <vector>

class MP4Recovery {
public:
    MP4Recovery(const std::string& outputDir);
    void recoverMP4(DiskScanner& scanner);

private:
    std::string outputDirectory;
    int fileCount;
    bool compareSignature(const unsigned char* data, const std::vector<unsigned char>& signature);
    void writeRecoveredFile(DiskScanner& scanner, unsigned char* buffer, DWORD bytesRead, DWORD startOffset, const std::string& originalFileName);
};

#endif // MP4RECOVERY_H
