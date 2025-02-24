#ifndef PASSENGERCAR_H
#define PASSENGERCAR_H

#include <string>
#include <iostream>

class PassengerCar {
private:
    std::string name;  
    bool isRepaired;   

public:
   
    explicit PassengerCar(std::string name); 
    void Repair();
    friend std::ostream& operator<<(std::ostream& os, const PassengerCar& car);
};

#endif
