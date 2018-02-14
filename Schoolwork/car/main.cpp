#include"vehicle.h"
#include"truck.h"
#include"person.h"
#include<iostream>
#include<string>
using ownerVehicle::Person;
using ownerVehicle::Vehicle;
using ownerVehicle::Truck;
using std::cout;
using std::endl;

int main() {
  Person owner1("Miley"), owner2;
  Vehicle car2, car1("BMW", 25, owner1);
  Truck truck2, truck1(14, 28, "Trukee", 0, owner1);

  cout<<"Here is the owner : "<<endl;
  cout<<owner1.getName()<<endl;
  cout<<"Here is the first car statistics: "<<endl;
  cout<<"Manufacturer: "<<car1.getManufacturer()<<endl;
  cout<<"Cylinder: "<<car1.getCylinder()<<endl;
  cout<<"Here is the first truck statistics : "<<endl;
  cout<<"Manufacturer: "<<truck1.getManufacturer()<<endl;
  cout<<"Cylinder: "<<truck1.getCylinder()<<endl;
  cout<<"Load Capactiy: "<<truck1.getLoadCap()<<endl;
  cout<<"Tow Capactiy: "<<truck1.getTowCap()<<endl;

  owner2= owner1;
  car2 = car1;
  truck2 = truck1;
  cout<<"Here is a copy of the owner : "<<endl;
  cout<<owner2.getName()<<endl;
  cout<<"Here is a copy of the first car statistics: "<<endl;
  cout<<"Manufacturer: "<<car2.getManufacturer()<<endl;
  cout<<"Cylinder: "<<car2.getCylinder()<<endl;
  cout<<"Here is a copy of the first truck statistics : "<<endl;
  cout<<"Manufacturer: "<<truck2.getManufacturer()<<endl;
  cout<<"Cylinder: "<<truck2.getCylinder()<<endl;
  cout<<"Load Capactiy: "<<truck2.getLoadCap()<<endl;
  cout<<"Tow Capactiy: "<<truck2.getTowCap()<<endl;

  return 0;
}
