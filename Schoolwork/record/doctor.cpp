#include<iostream>
#include<string>
//#include "employee.h"
//#include "salariedemployee.h"
#include "doctor.h"

namespace SavitchEmployees{
  Doctor::Doctor(){
    //EMPTY
  }
  Doctor::Doctor(const string& spec, double f, const string& theName,
  const string& theSsn,double theWeeklySalary) :
  SalariedEmployee(theName, theSsn, theWeeklySalary){
    specialty = spec;
    fee = f;
  }
  string Doctor::getSpecialty() const{
    return specialty;
  }
  double Doctor::getFee() const{
    return fee;
  }
  Doctor::Doctor(const Doctor& object){
    fee = object.getFee();
    specialty = object.getSpecialty();
  }
  Doctor& Doctor::operator =(const Doctor& rightSide){
    fee = rightSide.getFee();
    specialty = rightSide.getSpecialty();
    return *this;
  }

}
