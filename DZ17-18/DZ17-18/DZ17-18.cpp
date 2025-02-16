#include "Order.h"
#include <vector>
#include <algorithm>

int main() 
{
    setlocale(LC_ALL, "Russian");
    std::vector<Order> orders = 
    {
        {1, 3000.0, Status::New},
        {2, 6000.0, Status::Processing},
        {3, 4500.0, Status::New},
        {4, 5200.0, Status::Processing},
        {5, 2500.0, Status::New}
    };

    // Обновление статуса заказов
    auto now = std::chrono::system_clock::now();
    std::transform(orders.begin(), orders.end(), orders.begin(), [now](Order& order) 
        {
        if (order.status == Status::New && std::chrono::duration_cast<std::chrono::seconds>(now - order.orderDate).count() > 5) 
        {
            order.status = Status::Processing;
        }
        return order;
        });

    // Поиск заказа с суммой > 5000 
    auto it = std::find_if(orders.begin(), orders.end(), [](const Order& order) 
        {
        return order.amount > 5000 && order.status == Status::Processing;
        });

    if (it != orders.end()) 
    {
        std::cout << "Найден заказ " << it->orderNumber << " с суммой " << it->amount << std::endl;
    }

    // Перемещение заказов
    std::vector<Order> processingOrders;
    auto partitionPoint = std::partition(orders.begin(), orders.end(), [](const Order& order) 
        {
        return order.status != Status::Processing;
        });

    std::move(partitionPoint, orders.end(), std::back_inserter(processingOrders));
    orders.erase(partitionPoint, orders.end());

    // Проверка обнуления исходных заказов
    std::cout << "Оставшиеся заказы:" << std::endl;
    for (const auto& order : orders) 
    {
        std::cout << "Заказ " << order.orderNumber << " - " << statusToString(order.status) << std::endl;
    }

    std::cout << "Заказы в обработке:" << std::endl;
    for (const auto& order : processingOrders) 
    {
        std::cout << "Заказ " << order.orderNumber << " - " << statusToString(order.status) << std::endl;
    }

    return 0;
}
