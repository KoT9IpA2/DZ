#ifndef CUSTOM_EXCEPTIONS_H
#define CUSTOM_EXCEPTIONS_H

#include <exception>

class InvalidLogArgument : public std::exception 
{
public:
    const char* what() const noexcept override 
    {
        return "Ошибка: логарифм можно брать только от положительных чисел!";
    }
};

class InvalidRadiusArgument : public std::exception 
{
public:
    const char* what() const noexcept override 
    {
        return "Ошибка: радиус круга не может быть отрицательным!";
    }
};

#endif // CUSTOM_EXCEPTIONS_H
