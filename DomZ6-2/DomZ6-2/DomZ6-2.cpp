#include <iostream>
#include "matricha.h"

int main() 
{
    int rows = 3; 
    int cols = 3; 
 
    int** matricha = createMatricha(rows, cols);
    fillMatricha(matricha, rows, cols);
    printMatricha(matricha, rows, cols);
    deleteMatricha(matricha, rows);

    return 0;
}
