#pragma once
#ifndef MATRICHA_H
#define MATRICHA_H

// Функция для создания двумерного массива
int** createMatricha(int rows, int cols);
// Функция для заполнения массива 
void fillMatricha(int** matricha, int rows, int cols);
void printMatricha(int** matricha, int rows, int cols);
void deleteMatricha(int** matricha, int rows);

#endif 
