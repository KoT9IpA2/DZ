#pragma once
#ifndef MATRICHA_H
#define MATRICHA_H

// ������� ��� �������� ���������� �������
int** createMatricha(int rows, int cols);
// ������� ��� ���������� ������� 
void fillMatricha(int** matricha, int rows, int cols);
void printMatricha(int** matricha, int rows, int cols);
void deleteMatricha(int** matricha, int rows);

#endif 
