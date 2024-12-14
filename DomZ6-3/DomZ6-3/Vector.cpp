#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "vector.h"

void fillVector(std::vector<int>& vec, int size) 
{
    std::srand(std::time(0));
    for (int i = 0; i < size; ++i) 
    {
        vec.push_back(std::rand() % 100 + 1); 
    }
}

void printVector(const std::vector<int>& vec) 
{
    for (int num : vec) 
    {
        std::cout << num << " "; 
    }
    std::cout << std::endl; 
}

void sortVector(std::vector<int>& vec) 
{
    std::sort(vec.begin(), vec.end());
}
