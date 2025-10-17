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

    void normalizeFuelLevel();

    Vehicle(string name_);

    string getName();

    short getFuelLevel();

    virtual short refuel(short units) = 0;

    virtual string status() const = 0;

    virtual void simulatedHour();

    virtual ~Vehicle() {}

};

#endif // VEHICLE_H
