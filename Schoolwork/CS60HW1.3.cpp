#include<iostream>
using namespace std;

class GasPump{
public:
  void amount(int x);
  void charged();
  void costGallon();
  void reset();
  void continuePump();
  void set_cost(){
    cost = 5;
  }
private:
  double dispense;
  double cost;
  double chargeCost;
};

// Display the amount charged
void GasPump::amount(int x) {
  dispense = x;
  cout<<"This is the amount dispensed: "<<dispense<<" ";
}
// Display the cost per gallon, liter, or other unit of voume
void GasPump::costGallon(){
  cout<<" This is how much it is per gallon: "<<cost<<" ";
}
// Display amount chargef for armound dispensed
void GasPump::charged(){
  chargeCost = cost*dispense;
  cout<<" This is the amount charged: "<<chargeCost<<" ";
}
// Before use, the gas pump must reset to zero
void GasPump::reset(){
  dispense=0;
  chargeCost=0;
}
/* Continue to dispense the fuel, keep track of the amount dispensed, and
    compute the charge for the amount */
void GasPump::continuePump(){
  char answer;
  do {
    dispense++;
    chargeCost = cost*dispense;
    cout<<"There is "<<dispense<<" gallons."<<"It will cost : "<<chargeCost<<". Do you want to keep on pumping gas?(y or n)"<<endl;
    cin>>answer;
  } while(answer == 'y');
}

int main() {
  GasPump gas;
  gas.amount(20);
  gas.set_cost();
  gas.charged();
  gas.costGallon();
  gas.reset();
  gas.continuePump();

  return 0;
}
