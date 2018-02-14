#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<fstream>
#include<string>
using std::string;
using std::istream;
using std::ostream;

namespace SavitchEmployees{
  class Person {
  public:
    Person();
    Person(string theName);
    Person(const Person& theObject);
    string getName() const;
    Person& operator=(const Person& rtSide);
    friend istream& operator >>(istream& inStream, const Person& personObject);
    friend ostream& operator <<(ostream& outStream, const Person& personObject);
  private:
    string name;
  };
}

#endif
