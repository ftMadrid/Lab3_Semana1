#ifndef VEHICLE_H
#define VEHICLE_H

#include <algorithm>

using std::min;
using std::max;

class Vehicle
{

protected:

    string name_;
    short fuelLevel_;

public:

    void normalizeFuelLevel(){

        fuelLevel_ = max(0, fuelLevel_);
        fuelLevel_ = min(100, fuelLevel_);

    }

    Vehicle(const string& name_){
        this->name_ = name_;
        this->fuelLevel_ = 100;
    }

    string getName(){
        return name_;
    }

    ushort getFuelLevel(){
        return fuelLevel;
    }

    virtual short refuel(short units) = 0;

    virtual string status() const = 0;

    virtual void simulatedHour();

    virtual ~Vehicle() {}

};

#endif // VEHICLE_H
