#include "calculate.h"

void calculate(double a, double b, std::function<double(double, double)> operation) 
{
    try 
    {
        double result = operation(a, b);
        std::cout << "���������: " << result << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cerr << "������: " << e.what() << std::endl;
    }
}

void calculate(double a, std::function<double(double)> operation) 
{
    try 
    {
        double result = operation(a);
        std::cout << "���������: " << result << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cerr << "������: " << e.what() << std::endl;
    }
}
