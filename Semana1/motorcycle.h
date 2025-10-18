#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "vehicle.h"

using std::string;

class Motorcycle : public Vehicle
{
public:
    Motorcycle(string name_);

    void simulatedHour() override;
    void refuel(short units) override;
    void status() const override;

};

#endif // MOTORCYCLE_H
