#include <iostream>
#include "matricha.h"


int** createMatricha(int rows, int cols) 
{
    
    int** matricha = new int* [rows];

    
    for (int i = 0; i < rows; ++i) 
    {
        matricha[i] = new int[cols];
    }

    return matricha;
}

void fillMatricha(int** matricha, int rows, int cols)
{
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            matricha[i][j] = i * j;
        }
    }
}

void printMatricha(int** matricha, int rows, int cols)
{
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            std::cout << matricha[i][j];
        }
        std::cout << std::endl; 
    }
}

void deleteMatricha(int** matricha, int rows)
{
    
    for (int i = 0; i < rows; ++i) 
    {
        delete[] matricha[i];
    }

    delete[] matricha;
}
