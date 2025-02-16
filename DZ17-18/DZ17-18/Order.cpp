#include "Order.h"

std::string statusToString(Status status) 
{
    switch (status) 
    {
    case Status::New: return "new";
    case Status::Processing: return "processing";
    case Status::Shipped: return "shipped";
    }
    return "unknown";
}

Order::Order(int num, double amt, Status stat)
    : orderNumber(num), amount(amt), status(stat), orderDate(std::chrono::system_clock::now()) {}

Order::Order(const Order& other)
    : orderNumber(other.orderNumber), amount(other.amount), status(other.status), orderDate(other.orderDate) 
{
    std::cout << "Копирование заказа " << orderNumber << std::endl;
}

Order::Order(Order&& other) noexcept
    : orderNumber(other.orderNumber), amount(other.amount), status(other.status), orderDate(other.orderDate) 
{
    std::cout << "Перемещение заказа " << orderNumber << std::endl;
    other.orderNumber = 0;
    other.amount = 0.0;
    other.status = Status::New;
}

Order& Order::operator=(Order&& other) noexcept 
{
    if (this != &other) 
    {
        std::cout << "Перемещение заказа " << other.orderNumber << std::endl;
        orderNumber = other.orderNumber;
        amount = other.amount;
        status = other.status;
        orderDate = other.orderDate;
        other.orderNumber = 0;
        other.amount = 0.0;
        other.status = Status::New;
    }
    return *this;
}
