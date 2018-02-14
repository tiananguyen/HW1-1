#include "billing.h"
// #include "doctor.h"
// #include "patient.h"
#include<iostream>
#include<fstream>
#include<string>
using std::string;
using std::istream;
using std::ostream;
using SavitchEmployees::Doctor;

namespace SavitchEmployees{
  Billing::Billing() {
    due = 0;
  }
  Billing::Billing(double d,  Doctor prim,  Patient p1){
    due = d;
    primary = prim;
    person1 = p1;
  }
  double Billing::getDue(){
    return due;
  }
  Billing::Billing(const Billing& theObject){
    primary = theObject.primary;
    person1 = theObject.person1;
    due = theObject.due;
  }
  Billing& Billing::operator=(const Billing& rtSide){
    primary = rtSide.primary;
    person1 = rtSide.person1;
    due = rtSide.due;
    return *this;
  }
  istream& operator >>(istream& inStream, const Billing& object){
    inStream>>object;
    return inStream;
  }
  ostream& operator <<(ostream& outStream, const Billing& object){
    outStream<<object;
    return outStream;
  }
}
