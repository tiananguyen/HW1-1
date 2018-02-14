#include "person.h"
#include<iostream>
#include<string>
using std::string;
using std::istream;
using std::ostream;

namespace ownerVehicle {
  Person::Person(){
    name = "none";
  }
  Person::Person(string theName){
    name = theName;
  }
  Person::Person(const Person& theObject){
    name = theObject.getName();
  }
  string Person::getName() const{
    return name;
  }
  Person& Person::operator=(const Person& rtSide){
    name = rtSide.getName();
    return *this;
  }
  istream& operator >>(istream& inStream, const Person& personObject){
    inStream>>personObject;
    return inStream;
  }
  ostream& operator <<(ostream& outStream, const Person& personObject){
    outStream<<personObject;
    return outStream;
  }
}
