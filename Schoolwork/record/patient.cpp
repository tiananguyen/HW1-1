// #include "person.h"
#include "patient.h"
// #include "doctor.h"
// #include "employee.h"
// #include "salariedemployee.h"
#include<iostream>
#include<fstream>
#include<string>
using std::string;
using std::istream;
using std::ostream;
using SavitchEmployees::Doctor;


namespace SavitchEmployees{
  Patient::Patient() : Person() {
    //EMPTY
  }
  Patient::Patient(string n,  Doctor p) : Person(n){
    physician = p;
  }
  Doctor Patient::getPhysician() {
    return physician;
  }
  Patient& Patient::operator=(const Patient& rtSide){
    Person::operator=(rtSide);
    physician = rtSide.physician;
    return *this;
  }
  istream& operator >>(istream& inStream, const Patient& object){
    inStream>>object;
    return inStream;
  }
  ostream& operator <<(ostream& outStream, const Patient& object){
    outStream<<object;
    return outStream;
  }
}
