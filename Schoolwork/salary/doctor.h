#ifndef DOCTOR_H
#define DOCTOR_H

#include<iostream>
#include<string>
#include "employee.h"
#include "salariedemployee.h"
using std::string;

namespace SavitchEmployees{
  class Doctor : public SalariedEmployee {
  public:
    Doctor();
    Doctor(const string& spec, double f, const string& theName, const string& theSsn,
    double theWeeklySalary);
    string getSpecialty() const;
    double getFee() const;
    Doctor(const Doctor& object);
    Doctor& operator =(const Doctor& rightSide);
  private:
    string specialty;
    double fee;
  };
}

#endif
