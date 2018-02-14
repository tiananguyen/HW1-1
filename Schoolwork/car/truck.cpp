#include "truck.h"
#include "vehicle.h"
#include "person.h"
#include<iostream>
#include<string>
using std::string;
using std::istream;
using std::ostream;

namespace ownerVehicle{
  Truck::Truck() : Vehicle() {
      loadCap = 0;
      towCap = 0;
  }
  Truck::Truck(double load, int tow, string man, int cyl, const Person& own) :
  Vehicle(man, cyl, own){
    loadCap = load;
    towCap = tow;
  }
  double Truck::getLoadCap() const{
    return loadCap;
  }
  int Truck::getTowCap() const{
    return towCap;
  }
  Truck::Truck(const Truck& object) : Vehicle(object){
    loadCap = object.getLoadCap();
    towCap = object.getTowCap();
  }
  Truck& Truck::operator=(const Truck& rtSide){
    loadCap = rtSide.getLoadCap();
    towCap = rtSide.getTowCap();
    return *this;
  }
  // istream& operator >>(istream& inStream, const Truck& object){
  //   inStream>>object.getTowCap();
  //   inStream>>object.getloadCap();
  //   return inStream;
  //
  // }
  // ostream& operator <<(ostream& outStream, const Truck& object){
  //   outStream<<object.getTowCap();
  //   outStream<<object.getloadCap();
  //   return outStream;
  // }
}
