#include "CargoCar.h"

CargoCar::CargoCar(std::string name) : name(std::move(name)), isRepaired(false) {}

void CargoCar::Repair() 
{
    isRepaired = true;
}

std::ostream& operator<<(std::ostream& os, const CargoCar& car) 
{
    os << "�������� ������: " << car.name << ", ��������: " << (car.isRepaired ? "��" : "���");
    return os;
}