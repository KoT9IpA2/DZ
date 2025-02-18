#ifndef FILES_H
#define FILES_H

#include <iostream>
#include <filesystem>
#include <string>

class FolderScanner 
{
public:
    FolderScanner(const std::string& folderPath);
    void scanFolder();

private:
    std::string path;
};

#endif // FILES_H