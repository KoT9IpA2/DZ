#include <iostream>
#include "shift.h"

int main() 
{
    setlocale(LC_ALL, "Russian");
    int number;

    std::cout << "Введите целое число: ";
    std::cin >> number;

    check_and_shift(number);

    return 0;
}