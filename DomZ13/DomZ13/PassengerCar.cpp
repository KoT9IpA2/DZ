#include "PassengerCar.h"

PassengerCar::PassengerCar(std::string name) : name(std::move(name)), isRepaired(false) {}

void PassengerCar::Repair() 
{
    isRepaired = true;
}

std::ostream& operator<<(std::ostream& os, const PassengerCar& car)
{
    os << "�������� ������: " << car.name << ", ��������: " << (car.isRepaired ? "��" : "���");
    return os;
}