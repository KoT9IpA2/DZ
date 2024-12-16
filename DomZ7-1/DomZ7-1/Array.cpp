#include <iostream>
#include "array.h"


void fillArray(std::unique_ptr<int[]>& arr, int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        std::cout << "������� �������� ��� �������� " << i + 1 << ": ";
        std::cin >> arr[i]; 
    }
}


void printArray(const std::unique_ptr<int[]>& arr, int size) 
{
    std::cout << "�������� �������: ";
    for (int i = 0; i < size; ++i) 
    {
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl;
}
