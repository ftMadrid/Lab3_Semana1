#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(string name_){
    this->name_ = name_;
    this->fuelLevel_ = 100;
}

void Vehicle::normalizeFuelLevel(){
    fuelLevel_ = max(0, fuelLevel_);
    fuelLevel_ = min(100, fuelLevel_);
}

string Vehicle::getName(){
    return this->name_;
}

short Vehicle::getFuelLevel(){
    return this->fuelLevel_;
}



