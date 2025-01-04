#pragma once
#ifndef ARRAY_SHARED
#define ARRAY_SHARED
#include <memory>
#include <vector>

//Функция для создания и заполнения массива
void FillArray(std::shared_ptr<std::vector<int>>& array, size_t size);
//Функция для нахождения суммы элементов массива
void SumArray(const std::shared_ptr<std::vector<int>>& array, size_t size);
//Функция для нахождения минимального и максимального значения в массиве
void MinMaxArray(const std::shared_ptr<std::vector<int>>& array, size_t size);

#endif
