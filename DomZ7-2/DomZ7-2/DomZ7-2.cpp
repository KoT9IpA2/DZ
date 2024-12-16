#include <iostream>
#include "Array_shared.h"
#include <vector>

int main()
{
    std::setlocale(LC_ALL, "RUS");
    size_t n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    if (n == 0) {
        std::cerr << "Ошибка: размер массива должен быть больше 0." << std::endl;
        return 1;
    }
    auto array = std::make_shared<std::vector<int>>(n);

    FillArray(array, n);
    SumArray(array, n);
    MinMaxArray(array, n);
    return 0;
}
