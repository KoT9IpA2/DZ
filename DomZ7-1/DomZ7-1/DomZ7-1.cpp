#include <iostream>
#include <memory>
#include "array.h"

int main() 
{
    const int size = 10;

    std::unique_ptr<int[]> arr = std::make_unique<int[]>(size);

    fillArray(arr, size);
    printArray(arr, size);

    return 0;
}
