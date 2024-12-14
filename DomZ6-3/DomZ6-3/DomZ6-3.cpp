#include <iostream>
#include "vector.h"

int main() 
{

    std::setlocale(LC_ALL, "RUS");
    std::vector<int> vec;
    fillVector(vec, 10);
    std::cout << "Вектор до сортировки:" << std::endl;
    printVector(vec);
    sortVector(vec);
    std::cout << "Вектор после сортировки:" << std::endl;
    printVector(vec);

    return 0;
}
