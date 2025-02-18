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
        std::cout << "����� �� ����������!" << std::endl;
        return;
    }

    int fileCount = 0;
    int folderCount = 0;

    std::cout << "����� � ����������� .exe:" << std::endl;

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

    std::cout << "���������� ������: " << fileCount << std::endl;
    std::cout << "���������� �����: " << folderCount << std::endl;
}