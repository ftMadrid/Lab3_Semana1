#ifndef DRONE_H
#define DRONE_H

#include "vehicle.h"
#include "IFlyable.h"

using std::string;

class Drone : public Vehicle, public IFlyable {
public:
    Drone(string name_);

    void simulatedHour() override;
    void refuel(short units) override;
    void status() const override;
    void fly(int minutes) override;

};

#endif // DRONE_H
