#include <iostream>
#include <cstring>
#include "ReverseStr.h"

int main() 
{

    std::setlocale(LC_ALL, "RUS");
    std::cout << "Введите строку: ";
    char str[100]; 
    std::cin.getline(str, 100); 

    
    ReverseStr(str);

    
    std::cout << "Перевёрнутая строка: " << str << std::endl;

    return 0;
}
