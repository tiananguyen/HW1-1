#ifndef PATIENT_H
#define PATIENT_H
#include<iostream>
#include<fstream>
#include<string>
#include "person.h"
#include "doctor.h"
using std::string;
using std::istream;
using std::ostream;
using SavitchEmployees::Doctor;

namespace SavitchEmployees {
  class Patient : public Person {
  public:
    Patient();
    Patient(string n,  Doctor p);
    Doctor getPhysician();
    Patient& operator=(const Patient& rtSide);
    friend istream& operator >>(istream& inStream, const Patient& object);
    friend ostream& operator <<(ostream& outStream, const Patient& object);
  private:
    Doctor physician;
  };
}

#endif
