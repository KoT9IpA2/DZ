#ifndef CUSTOM_EXCEPTIONS_H
#define CUSTOM_EXCEPTIONS_H

#include <exception>

class InvalidLogArgument : public std::exception 
{
public:
    const char* what() const noexcept override 
    {
        return "������: �������� ����� ����� ������ �� ������������� �����!";
    }
};

class InvalidRadiusArgument : public std::exception 
{
public:
    const char* what() const noexcept override 
    {
        return "������: ������ ����� �� ����� ���� �������������!";
    }
};

#endif // CUSTOM_EXCEPTIONS_H
