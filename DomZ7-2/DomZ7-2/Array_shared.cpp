#include <iostream>
#include "Array_shared.h"

void FillArray(std::shared_ptr<std::vector<int>>& array, size_t size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << "������� �������� ��� �������� " << i + 1 << ": ";
		std::cin >> (*array)[i];
	}
}
void SumArray(const std::shared_ptr<std::vector<int>>& array, size_t size)
{
	if (array->empty()) 
	{
		std::cerr << "������: ������ ������." << std::endl;
		return;
	}

	int sum = 0;
	for (size_t i = 0; i < size; ++i) 
	{
		sum += (*array)[i];
	}
	std::cout << "����� ��������� �������: " << sum << std::endl;
}
void MinMaxArray(const std::shared_ptr<std::vector<int>>& array, size_t size)
{
	if (array->empty()) 
	{
		std::cerr << "������: ������ ������." << std::endl;
		return;
	}

	int min = (*array)[0];
	int max = (*array)[0];

	for (size_t i = 1; i < size; ++i) 
	{
		if ((*array)[i] < min) 
		{
			min = (*array)[i];
		}
		if ((*array)[i] > max) 
		{
			max = (*array)[i];
		}
	}

	std::cout << "����������� ������� �������: " << min << std::endl;
	std::cout << "������������ ������� �������: " << max << std::endl;
	
}