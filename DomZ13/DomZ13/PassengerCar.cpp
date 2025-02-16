#include "PassengerCar.h"

PassengerCar::PassengerCar(std::string name) : name(std::move(name)), isRepaired(false) {}

void PassengerCar::Repair() 
{
    isRepaired = true;
}

std::ostream& operator<<(std::ostream& os, const PassengerCar& car)
{
    os << "Легковая машина: " << car.name << ", Починена: " << (car.isRepaired ? "Да" : "Нет");
    return os;
}