#include "arranalyz.h"
#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    DataProcessor processor(100, 1, 100); 
    processor.process();
    return 0;
}
