#include <iostream>
#include <cmath>
#include "calculate.h"
#include "CustomExceptions.h"

int main() 
{
    setlocale(LC_ALL, "Russian");
    auto division = [](double x, double y) -> double 
        {
        if (y == 0) 
        {
            throw std::invalid_argument("Нельзя делить на ноль!");
        }
        return x / y;
        };

    auto squareRoot = [](double x) -> double 
        {
        if (x < 0) 
        {
            throw std::domain_error("Нельзя извлекать корень из отрицательного числа!");
        }
        return std::sqrt(x);
        };

    auto logarithm = [](double x) -> double 
        {
        if (x <= 0) {
            throw InvalidLogArgument();
        }
        return std::log(x);
        };

    auto circleArea = [](double radius) -> double 
        {
        if (radius < 0) {
            throw InvalidRadiusArgument();
        }
        return 3.14159 * radius * radius;
        };

    std::cout << "Тестирование функций: ";

    std::cout << "Деление 10 / 2:";
    calculate(10, 2, division);

    std::cout << "Деление 5 / 0:";
    calculate(5, 0, division); 

    std::cout << "Квадратный корень из 16:";
    calculate(16, squareRoot);

    std::cout << "Квадратный корень из -9:";
    calculate(-9, squareRoot); 

    std::cout << "Логарифм log(10):";
    calculate(10, logarithm);

    std::cout << "Логарифм log(0):";
    calculate(0, logarithm); 

    std::cout << "Площадь круга (r = 5):";
    calculate(5, circleArea);

    std::cout << "Площадь круга (r = -3):";
    calculate(-3, circleArea); 

    return 0;
}
