#ifndef GARAGE_H
#define GARAGE_H

#include <vector>
#include <iostream>


template <typename CarType>
class Garage 
{
    private:
        std::vector<CarType> repairedCars; // Список отремонтированных машин

    public:
 
        void AddToGarage(const CarType& car);
        void DisplayAll() const;
};

// Реализация методов Garage

template <typename CarType>
void Garage<CarType>::AddToGarage(const CarType& car) {
    repairedCars.push_back(car);
}

template <typename CarType>
void Garage<CarType>::DisplayAll() const 
{
    std::cout << "Машины в гараже:";
    for (const auto& car : repairedCars) 
    {
        std::cout << car << std::endl;
    }
}

#endif