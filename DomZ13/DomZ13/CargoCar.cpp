#include "CargoCar.h"

CargoCar::CargoCar(std::string name) : name(std::move(name)), isRepaired(false) {}

void CargoCar::Repair() 
{
    isRepaired = true;
}

std::ostream& operator<<(std::ostream& os, const CargoCar& car) 
{
    os << "Грузовая машина: " << car.name << ", Починена: " << (car.isRepaired ? "Да" : "Нет");
    return os;
}