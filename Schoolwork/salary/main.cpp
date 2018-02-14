#include <iostream>
#include "employee.h"
#include "salariedemployee.h"
#include "doctor.h"
using std::cout;
using std::endl;
using std::string;
using SavitchEmployees::Doctor;

int main() {

  Doctor person1("Pediatrician", 70.00, "Your Name 2", "123456789",
  100.00), person2;
  cout<<"Here is the record of Doctor 1:"<<endl;
  cout<<"Specialty: "<<person1.getSpecialty()<<endl;
  cout<<"Fee: $"<<person1.getFee()<<endl;
  cout<<"Name: "<<person1.getName()<<endl;
  cout<<"SSN: "<<person1.getSsn()<<endl;
  cout<<"Salary: $"<<person1.getSalary()<<endl;

  person2 = person1;
  cout<<"Here is the record of Doctor 2:"<<endl;
  cout<<"Specialty: "<<person2.getSpecialty()<<endl;
  cout<<"Fee: $"<<person2.getFee()<<endl;

  return 0;
}
