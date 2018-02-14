#include "vehicle.h"
#include "person.h"
#include<iostream>
#include<string>
using std::string;
using std::istream;
using std::ostream;

namespace ownerVehicle {
    Vehicle::Vehicle(){
      manufacturer = "none";
      cylinder = 0;
    }
    Vehicle::Vehicle(string man, int cyl, const Person& own){
      manufacturer = man;
      cylinder = cyl;
      owner = own;
    }
    string Vehicle::getManufacturer() const{
      return manufacturer;
    }
    int Vehicle::getCylinder() const{
      return cylinder;
    }
    Vehicle::Vehicle(const Vehicle& object){
      manufacturer = object.getManufacturer();
      cylinder = object.getCylinder();
    }
    Vehicle& Vehicle::operator=(const Vehicle& rtSide){
      manufacturer= rtSide.getManufacturer();
      cylinder = rtSide.getCylinder();
      return *this;
    }
    istream& operator >>(istream& inStream, const Vehicle& object){
      inStream>>object;
      return inStream;
    }
    ostream& operator <<(ostream& outStream, const Vehicle& object){
      outStream<<object;
      return outStream;
    }
}
