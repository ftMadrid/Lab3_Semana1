#include "drone.h"
#include <iostream>

#include "vehicle.h"

using std::cout;
using std::endl;
using std::string;

#define print cout <<
#define ln << endl

Drone::Drone(string name_) : Vehicle(name_) {}

void Drone::simulatedHour(){
    fuelLevel_ -= 8;
}

void Drone::refuel(short units){
    fuelLevel_ += (units*3)/2;
    this->normalizeFuelLevel();
}

void Drone::status() const{
    print "Drone: " <<this->getName() << " | Battery = " << this->getFuelLevel() ln;
}

void Drone::fly(int minutes) {
    fuelLevel_ -= minutes*3;
    print "Attempting flight for flyable vehicles..." ln;
    print this->getName() << " flew for "<<minutes<<" minutes." ln;
}
