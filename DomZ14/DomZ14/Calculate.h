#ifndef CALCULATE_H
#define CALCULATE_H

#include <iostream>
#include <functional>

void calculate(double a, double b, std::function<double(double, double)> operation);

void calculate(double a, std::function<double(double)> operation);

#endif 