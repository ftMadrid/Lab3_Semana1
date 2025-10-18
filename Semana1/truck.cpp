#include "truck.h"
#include <iostream>

#include "vehicle.h"

using std::cout;
using std::endl;
using std::string;

#define print cout <<
#define ln << endl

Truck::Truck(string name_) : Vehicle(name_) {}

void Truck::simulatedHour(){
    fuelLevel_ -= 9;
    this->normalizeFuelLevel();
}

void Truck::refuel(short units){
    fuelLevel_ += units/2;
}

void Truck::status() const{
    print "Truck: " <<this->getName() << " | Fuel Level = " << this->getFuelLevel() ln;
}
