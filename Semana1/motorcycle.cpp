#include "motorcycle.h"
#include <iostream>

#include "vehicle.h"

using std::cout;
using std::endl;
using std::string;

#define print cout <<
#define ln << endl

Motorcycle::Motorcycle(string name_) : Vehicle(name_) {}

void Motorcycle::simulatedHour(){
    fuelLevel_ -= 4;
}

void Motorcycle::refuel(short units){
    fuelLevel_ += (units*4)/5;
    this->normalizeFuelLevel();
}

void Motorcycle::status() const{
    print "Motorcycle: " <<this->getName() << " | Fuel Level = " << this->getFuelLevel() ln;
}
