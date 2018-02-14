#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
#include<string>
#include "person.h"
using std::string;
using std::istream;
using std::ostream;

namespace ownerVehicle {
  class Vehicle {
  public:
    Vehicle();
    Vehicle(string man, int cyl, const Person& own);
    string getManufacturer() const;
    int getCylinder() const;
    Vehicle(const Vehicle& object);
    Vehicle& operator=(const Vehicle& rtSide);
    friend istream& operator >>(istream& inStream, const Vehicle& object);
    friend ostream& operator <<(ostream& outStream, const Vehicle& object);
  private:
    string manufacturer;
    int cylinder;
    Person owner;
  };
}

#endif
