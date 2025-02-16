#ifndef SERVICESTATION_H
#define SERVICESTATION_H

#include <vector>
#include "Garage.h"

template <typename CarType>
class ServiceStation 
{
    private:
        std::vector<CarType> cars; 
        Garage<CarType> garage;    
        size_t limit;              

    public:
   
        explicit ServiceStation(size_t limit);       
        void AddCar(const CarType& car); 
        void RepairAll();
        void DisplayGarage() const;
        void DisplayCars() const;
};

// Реализация методов ServiceStation

template <typename CarType>
ServiceStation<CarType>::ServiceStation(size_t limit) : limit(limit) {}

template <typename CarType>
void ServiceStation<CarType>::AddCar(const CarType& car) 
{
    if (cars.size() < limit) 
    {
        cars.push_back(car);
        std::cout << "Добавлена машина: " << car << std::endl;
    }
    else {
        std::cout << "Ошибка: СТО переполнено!";
    }
}

template <typename CarType>
void ServiceStation<CarType>::RepairAll() 
{
    for (auto& car : cars) 
    {
        car.Repair(); 
        garage.AddToGarage(car);
    }
    cars.clear();
    std::cout << "Все машины отремонтированы и перемещены в гараж.";
}

template <typename CarType>
void ServiceStation<CarType>::DisplayGarage() const 
{
    garage.DisplayAll();
}

template <typename CarType>
void ServiceStation<CarType>::DisplayCars() const 
{
    std::cout << "Машины в СТО:";
    for (const auto& car : cars) 
    {
        std::cout << car << std::endl;
    }
}

#endif