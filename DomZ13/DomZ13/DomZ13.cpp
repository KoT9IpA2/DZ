#include <iostream>
#include "ServiceStation.h"
#include "PassengerCar.h"
#include "CargoCar.h"

int main() {
    setlocale(LC_ALL, "Russian");
    ServiceStation<PassengerCar> passengerStation(5);
    ServiceStation<CargoCar> cargoStation(5);

    
    for (int i = 1; i <= 6; ++i) 
    {
        passengerStation.AddCar(PassengerCar("Легковая" + std::to_string(i)));
        cargoStation.AddCar(CargoCar("Грузовая" + std::to_string(i)));
    }

 
    std::cout << "Перед ремонтом:";
    std::cout << "Легковые машины:";
    passengerStation.DisplayCars();
    std::cout << "Грузовые машины:";
    cargoStation.DisplayCars();

   
    passengerStation.RepairAll();
    cargoStation.RepairAll();


    std::cout << "Гараж после ремонта:";
    std::cout << "Легковые машины:";
    passengerStation.DisplayGarage();
    std::cout << "Грузовые машины:";
    cargoStation.DisplayGarage();

    return 0;
}