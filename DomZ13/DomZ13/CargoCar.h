#ifndef CARGOCAR_H
#define CARGOCAR_H

#include <string>
#include <iostream>


class CargoCar {
private:
    std::string name;  
    bool isRepaired;   

public:
 
    explicit CargoCar(std::string name);
    void Repair();
    friend std::ostream& operator<<(std::ostream& os, const CargoCar& car);
};

#endif