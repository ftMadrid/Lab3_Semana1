#include <QCoreApplication>
#include <iostream>
#include <vector>

#include "vehicle.h"
#include "car.h"
#include "truck.h"
#include "drone.h"
#include "motorcycle.h"
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

#define print cout <<
#define ln << endl

int main(int argc, char *argv[]) {

    QCoreApplication a(argc, argv);

    vector<Vehicle*> vehicles;

    vehicles.push_back(new Car("Nissan Altima 2010"));
    vehicles.push_back(new Truck("Ford F-150 2010"));
    vehicles.push_back(new Drone("DJI Phantom 4 2016"));
    vehicles.push_back(new Motorcycle("Yamaha MT-07 2014"));

    for(int i = 0; i<=7;i++){

        print "\n["<<i<<"h]\n" ln;

        for(auto vehicle : vehicles){

            vehicle->simulatedHour();
            vehicle->status();

            if(i % 2 == 0 && i != 0){
                if (Drone* drone = dynamic_cast<Drone*>(vehicle)) {
                    drone->fly(5);
                }
            }

            if(i == 3 || i == 6){
                vehicle->refuel(15);
            }
        }

        if(i == 3 || i == 6){
            print "\nRefueling all vehicles (+15)" ln;
        }
    }

    print "\nFinal Summary: \n" ln;
    for(auto vehicle : vehicles){
        print "- ";
        vehicle->status();
        delete vehicle;
    }

    vehicles.clear();

    return a.exec();
}
