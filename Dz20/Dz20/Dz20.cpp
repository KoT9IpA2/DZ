#include "Files.h"

int main() 
{
    setlocale(LC_ALL, "Russian");
    std::string folderPath;
    std::cout << "Введите имя папки: ";
    std::getline(std::cin, folderPath);

    FolderScanner scanner(folderPath);
    scanner.scanFolder();

    return 0;
}