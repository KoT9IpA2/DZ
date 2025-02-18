#include <iostream>
#include "Ground.h"
#include "Air.h"
#include "Express.h"
#include "DeliveryContext.h"

int main() 
{
    setlocale(LC_ALL, "Russian");
    float weight, distance;
    int choice;

    std::cout << "Введите вес посылки (кг): ";
    std::cin >> weight;
    std::cout << "Введите расстояние (км): ";
    std::cin >> distance;

    GroundDelivery ground;
    AirDelivery air;
    ExpressDelivery express;

    DeliveryContext context(&ground); 

    std::cout << "Выберите метод доставки:";
    std::cout << "1 - Наземная";
    std::cout << "2 - Воздушная";
    std::cout << "3 - Экспресс";
    std::cout << "Ваш выбор: ";
    std::cin >> choice;

    switch (choice) 
    {
    case 1:
        context.setStrategy(&ground);
        break;
    case 2:
        context.setStrategy(&air);
        break;
    case 3:
        context.setStrategy(&express);
        break;
    default:
        std::cout << "Неверный выбор! Используется наземная доставка.";
        context.setStrategy(&ground);
    }

    float cost = context.calculateDeliveryCost(weight, distance);
    std::cout << "Стоимость доставки: " << cost << " руб." << std::endl;

    return 0;
}