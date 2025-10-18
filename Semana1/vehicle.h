#ifndef VEHICLE_H
#define VEHICLE_H

#include <algorithm>
#include <string>

using std::min;
using std::max;
using std::string;

class Vehicle
{

protected:

    string name_;
    short fuelLevel_;

public:

    Vehicle(string name_);

    string getName() const;

    short getFuelLevel() const;

    virtual void refuel(short units) = 0;

    virtual void status() const = 0;

    virtual void simulatedHour();

    virtual void normalizeFuelLevel();

    virtual ~Vehicle();

};

#endif // VEHICLE_H
