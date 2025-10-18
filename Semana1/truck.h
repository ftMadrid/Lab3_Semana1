#ifndef TRUCK_H
#define TRUCK_H

#include "vehicle.h"

using std::string;

class Truck : public Vehicle {

public:
    Truck(string name_);

    void simulatedHour() override;
    void refuel(short units) override;
    void status() const override;

};

#endif // TRUCK_H
