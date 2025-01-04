#pragma once
#ifndef ARRAY_H
#define ARRAY_H
#include <memory>

// ������� ��� �������� � ���������� ������� ���������� �� ������������
void fillArray(std::unique_ptr<int[]>& arr, int size);
// ������� ��� ������ �������� ���� ��������� �������
void printArray(const std::unique_ptr<int[]>& arr, int size);

#endif 
