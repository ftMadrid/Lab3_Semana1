#include "vehicle.h"
#include <iostream>

using std::string;
using std::max;
using std::min;

Vehicle::Vehicle(string name_){
    this->name_ = name_;
    this->fuelLevel_ = 100;
}

Vehicle::~Vehicle(){}

void Vehicle::simulatedHour(){}

short start = 0;
short final = 100;

void Vehicle::normalizeFuelLevel(){
    fuelLevel_ = max(start, fuelLevel_);
    fuelLevel_ = min(final, fuelLevel_);
}

string Vehicle::getName() const{
    return this->name_;
}

short Vehicle::getFuelLevel() const{
    return this->fuelLevel_;
}



