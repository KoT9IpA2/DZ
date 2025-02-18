#include "Files.h"
#include <filesystem>

namespace fs = std::filesystem;

FolderScanner::FolderScanner(const std::string& folderPath) 
{
    path = folderPath;
}

void FolderScanner::scanFolder() 
{
    if (!fs::exists(path)) 
    {
        std::cout << "Папка не существует!" << std::endl;
        return;
    }

    int fileCount = 0;
    int folderCount = 0;

    std::cout << "Файлы с расширением .exe:" << std::endl;

    for (const auto& entry : fs::directory_iterator(path)) 
    {
        if (entry.is_directory()) 
        {
            folderCount++;
        }
        else 
        {
            fileCount++;
            if (entry.path().extension() == ".exe") 
            {
                std::cout << entry.path().filename() << std::endl;
            }
        }
    }

    std::cout << "Количество файлов: " << fileCount << std::endl;
    std::cout << "Количество папок: " << folderCount << std::endl;
}