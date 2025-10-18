#include "car.h"
#include <iostream>

#include "vehicle.h"
#include <string>

using std::cout;
using std::endl;
using std::string;

#define print cout <<
#define ln << endl

Car::Car(string name_) : Vehicle(name_) {}

void Car::simulatedHour(){
    fuelLevel_ -= 6;
    this->normalizeFuelLevel();
}

void Car::refuel(short units){
    fuelLevel_ += units;
}

void Car::status() const{
    print "Car: " <<this->getName() << " | Fuel Level = " << this->getFuelLevel() ln;
}
