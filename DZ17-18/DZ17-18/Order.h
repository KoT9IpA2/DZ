#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <vector>
#include <string>
#include <chrono>

enum class Status { New, Processing, Shipped };

std::string statusToString(Status status);

class Order 
{
public:
    int orderNumber;
    double amount;
    Status status;
    std::chrono::system_clock::time_point orderDate;

    Order(int num, double amt, Status stat);
    Order(const Order& other);
    Order(Order&& other) noexcept;
    Order& operator=(Order&& other) noexcept;
};

#endif // ORDER_H
