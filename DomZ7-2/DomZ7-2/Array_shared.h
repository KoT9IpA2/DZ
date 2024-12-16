#pragma once
#ifndef ARRAY_SHARED
#define ARRAY_SHARED
#include <memory>
#include <vector>

//������� ��� �������� � ���������� �������
void FillArray(std::shared_ptr<std::vector<int>>& array, size_t size);
//������� ��� ���������� ����� ��������� �������
void SumArray(const std::shared_ptr<std::vector<int>>& array, size_t size);
//������� ��� ���������� ������������ � ������������� �������� � �������
void MinMaxArray(const std::shared_ptr<std::vector<int>>& array, size_t size);

#endif
