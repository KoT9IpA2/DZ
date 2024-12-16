#pragma once
#ifndef ARR_UNTIL_H
#define ARR_UNTIL_H
#include <memory>
#include <vector>

// ������� ��� �������� � ���������� ������� ���������� �� ������������
void fillArray(std::unique_ptr<int[]>& arr, int size);
void printArray(const std::unique_ptr<int[]>& arr, int size);
int findMin(const std::unique_ptr<int[]>& arr, int size);
int findMax(const std::unique_ptr<int[]>& arr, int size);

#endif
