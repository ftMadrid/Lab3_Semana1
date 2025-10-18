#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

using std::string;

class Car : public Vehicle {

public:
    Car(string name_);

    void simulatedHour() override;
    void refuel(short units) override;
    void status() const override;

};

#endif // CAR_H
