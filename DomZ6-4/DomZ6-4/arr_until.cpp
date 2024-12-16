#include <iostream>
#include "arr_until.h"


void fillArray(std::unique_ptr<int[]>& arr, int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        std::cout << "¬ведите значение дл€ элемента " << i + 1 << ": ";
        std::cin >> arr[i]; 
    }
}

void printArray(const std::unique_ptr<int[]>& arr, int size) 
{
    std::cout << "Ёлементы массива: ";
    for (int i = 0; i < size; ++i) 
    {
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl;
}

int findMin(const std::unique_ptr<int[]>& arr, int size) 
{
    int min = arr[0]; 
    for (int i = 1; i < size; ++i) 
    {
        if (arr[i] < min)
        {
            min = arr[i]; 
        }
    }
    return min;
}

int findMax(const std::unique_ptr<int[]>& arr, int size) 
{
    int max = arr[0];
    for (int i = 1; i < size; ++i) 
    {
        if (arr[i] > max) 
        {
            max = arr[i]; 
        }
    }
    return max;
}
