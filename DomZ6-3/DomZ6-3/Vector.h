#pragma once
#ifndef VECTOR_H
#define VECTOR_H
#include <vector>

// Функция для создания и заполнения вектора случайными числами от 1 до 100
void fillVector(std::vector<int>& vec, int size);
void printVector(const std::vector<int>& vec);
// Функция для сортировки вектора в порядке возрастания
void sortVector(std::vector<int>& vec);

#endif 
