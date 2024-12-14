#include <iostream>
#include <memory>
#include "arr_until.h"

int main() 
{
    std::setlocale(LC_ALL, "RUS");

    const int size = 10; 

    std::unique_ptr<int[]> arr = std::make_unique<int[]>(size);

    fillArray(arr, size);
    printArray(arr, size);

    int min = findMin(arr, size);
    std::cout << "Минимальное значение в массиве: " << min << std::endl;
    int max = findMax(arr, size);
    std::cout << "Максимальное значение в массиве: " << max << std::endl;

    return 0;
}
