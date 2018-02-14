#ifndef BILLING_H
#define BILLING_H
#include "doctor.h"
#include "patient.h"
#include<iostream>
#include<fstream>
#include<string>
using std::string;
using std::istream;
using std::ostream;
using SavitchEmployees::Doctor;

namespace SavitchEmployees{
  class Billing{
  public:
    Billing();
    Billing(double d,  Doctor prim,  Patient p1);
    Billing(const Billing& theObject);
    double getDue();
    Billing& operator=(const Billing& rtSide);
    // const Billing operator+(const Billing& d) const;
    friend istream& operator >>(istream& inStream, const Billing& object);
    friend ostream& operator <<(ostream& outStream, const Billing& object);
  private:
    Doctor primary;
    Patient person1;
    double due;
  };
}

#endif
