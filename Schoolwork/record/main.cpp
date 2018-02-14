#include <iostream>
#include <string>
#include "employee.h"
#include "salariedemployee.h"
#include "doctor.h"
#include "person.h"
#include "patient.h"
#include "billing.h"
using std::cout;
using std::endl;
using std::string;
using SavitchEmployees::Doctor;
using SavitchEmployees::Patient;
using SavitchEmployees::Billing;

int main(){
  Doctor doc1("Pediatrician", 70.00, "Your Name 2", "123456789",
  100.00), doc2("Vet", 56, "Issacc", "84928403", 50);
  Patient p1("Taylor", doc1), p2;
  Billing b1(340, doc2, p1),
  b2(25, doc2, p1);
  double total=0;

  cout<<"Here is the record of Doctor 1:"<<endl;
  cout<<"Specialty: "<<doc1.getSpecialty()<<endl;
  cout<<"Fee: $"<<doc1.getFee()<<endl;
  cout<<"Name: "<<doc1.getName()<<endl;
  cout<<"SSN: "<<doc1.getSsn()<<endl;
  cout<<"Salary: $"<<doc1.getSalary()<<endl;

  cout<<"Here is the record of Doctor 2:"<<endl;
  cout<<"Specialty: "<<doc2.getSpecialty()<<endl;
  cout<<"Fee: $"<<doc2.getFee()<<endl;
  cout<<"Name: "<<doc2.getName()<<endl;
  cout<<"SSN: "<<doc2.getSsn()<<endl;
  cout<<"Salary: $"<<doc2.getSalary()<<endl;

  cout<<"Here is the first billing information: "<<endl;
  cout<<"Due: $"<<b1.getDue()<<endl;

  cout<<"Here is the second billing information: "<<endl;
  cout<<"Due: $"<<b2.getDue()<<endl;

  total = b1.getDue() + b2.getDue();
  cout<<"Here is the total: $"<<total<<endl;
}
