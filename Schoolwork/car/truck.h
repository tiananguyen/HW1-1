#ifndef TRUCK_H
#define TRUCK_H
#include "vehicle.h"
#include "person.h"
#include<iostream>
#include<string>
using std::string;
using std::istream;
using std::ostream;

namespace ownerVehicle{
  class Truck : public Vehicle {
  public:
    Truck();
    Truck(double load, int tow, string man, int cyl, const Person& own);
    double getLoadCap() const;
    int getTowCap() const;
    Truck(const Truck& object);
    Truck& operator=(const Truck& rtSide);
    friend istream& operator >>(istream& inStream, const Truck& object);
    friend ostream& operator <<(ostream& outStream, const Truck& object);
  private:
    double loadCap;
    int towCap;
    Person owner;
  };
}

#endif
