#pragma once
#ifndef ARRAY_H
#define ARRAY_H
#include <memory>

// Функция для создания и заполнения массива значениями от пользователя
void fillArray(std::unique_ptr<int[]>& arr, int size);
// Функция для вывода значений всех элементов массива
void printArray(const std::unique_ptr<int[]>& arr, int size);

#endif 
