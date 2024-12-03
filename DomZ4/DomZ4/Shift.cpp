#include <iostream>
#include "shift.h"

void check_and_shift(int number) 
{
    (number > 0 && number % 2 == 0)
        ? std::cout << "Результат сдвига влево: " << (number << 2) << std::endl
        : std::cout << "Результат сдвига вправо: " << (number >> 2) << std::endl;
}