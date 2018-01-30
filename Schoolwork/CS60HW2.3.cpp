#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

class Money{
public:
  Money();
  Money(double amount);
  Money(double theDollars, double theCents);
  Money(int theDollars);
  double getAmount() const;
  int getDollars() const;
  int getCents() const;

  friend const Money operator +(const Money& amount1, const Money& amount2);
  friend const Money operator -(const Money& amount1, const Money& amount2);
  friend bool operator ==(const Money& amount1, const Money& amount2);
  friend const Money operator -(const Money& amount);

  //Comparison operators added
  friend bool operator <(const Money& amount1, const Money& amount2);
  friend bool operator <=(const Money& amount1, const Money& amount2);
  friend bool operator >(const Money& amount1, const Money& amount2);
  friend bool operator >=(const Money& amount1, const Money& amount2);

  //Percent member function added
  //Returns a percentage of the money amount in the calling object
  const Money percent(int percentFigure) const;

  friend ostream& operator <<(ostream& outputStream, const Money& amount);
  friend istream& operator >>(istream& inputStream, Money& amount);

private:
  int dollars, cents;
  int dollarsPart(double amount) const;
  int centsPart(double amount) const;
  int round(double number) const;
};

int main() {
  Money yourAmount, myAmount(10,9);
  int x;
  cout<<"Enter the amount of money: "<<endl;
  cin>>yourAmount;
  //Using the percent function
  cout<<"How much percentage of the money amount do you want?"<<endl;
  cin>>x;

  cout<<"Your amount is: "<<yourAmount<<endl;
  cout<<"My amount is: "<<myAmount<<endl;

  cout<<"Here is the percentage of money amount: "<<(yourAmount.percent(x))<<endl;


  if(yourAmount == myAmount){
    cout<<"We have the same amount."<<endl;
  } else {
    cout<<"One of us is richer"<<endl;
  }

  //Using the >, <, <=, >= functions
  if(yourAmount > myAmount){
    cout<<"You have more money than I do.(Using the > operator function)"<<endl;
  }
  if(yourAmount < myAmount){
    cout<<"I have less money than you do.(Using the < operator function)"<<endl;
  }
  if(yourAmount > myAmount || yourAmount==myAmount){
    cout<<"You have more than or equal to the amount of money I have.(Using the >= operator function)"<<endl;
  }
  if(yourAmount < myAmount || yourAmount==myAmount){
    cout<<"You have less than or equal to the amount of money I have.(Using the >= operator function)"<<endl;
  }

  Money ourAmount = yourAmount + myAmount;
  cout<<yourAmount<<" + "<<myAmount<<" equals "<<ourAmount<<endl;

  Money diffAmount = yourAmount - myAmount;
  cout<<yourAmount<<" - "<<myAmount<<" equals "<<diffAmount<<endl;


  return 0;
}

const Money operator +(const Money& amount1, const Money& amount2){
  int allCents1 = amount1.getCents() + amount1.getDollars()*100;
  int allCents2 = amount2.getCents() + amount2.getDollars()*100;
  int sumAllCents = allCents1 + allCents2;
  int absAllCents = abs(sumAllCents);
  int finalDollars = absAllCents/100;
  int finalCents = absAllCents%100;
  if(sumAllCents<0){
    finalDollars = -finalDollars;
    finalCents = -finalCents;
  }

  return Money(finalDollars, finalCents);
}

const Money operator -(const Money& amount1, const Money& amount2){
  int allCents1 = amount1.getCents() + amount1.getDollars()*100;
  int allCents2 = amount2.getCents() + amount2.getDollars()*100;
  int diffAllCents = allCents1 - allCents2;
  int absAllCents = abs(diffAllCents);
  int finalDollars = absAllCents/100;
  int finalCents = absAllCents % 100;
  if(diffAllCents<0){
    finalDollars = -finalDollars;
    finalCents =-finalCents;
  }

  return Money(finalDollars,finalCents);
}

bool operator ==(const Money& amount1, const Money& amount2){
  return((amount1.getDollars()==amount2.getDollars()) &&
  (amount1.getCents() == amount2.getCents()));
}

const Money operator -(const Money& amount){
  return Money(-amount.getDollars(),-amount.getCents());
}

//Comparison operator < added
bool operator <(const Money& amount1, const Money& amount2){
  if(amount1.getDollars()<amount2.getDollars()){
    return true;
  } else if(amount1.getDollars()==amount2.getDollars()
  && amount1.getCents()<amount2.getCents()){
    return true;
  } else {
    return false;
  }
}
//Comparison operator <= added
bool operator <=(const Money& amount1, const Money& amount2){
  if(amount1.getDollars()<amount2.getDollars()){
    return true;
  } else if(amount1.getDollars()==amount2.getDollars()
  && amount1.getCents()<amount2.getCents()){
    return true;
  } else if(amount1.getDollars()==amount2.getDollars()
  && amount1.getCents()==amount2.getCents()){
    return true;
  } else {
    return false;
  }
}
//Comparison operator > added
bool operator >(const Money& amount1, const Money& amount2){
  if(amount1.getDollars()>amount2.getDollars()){
    return true;
  } else if(amount1.getDollars()==amount2.getDollars()
  && amount1.getCents()>amount2.getCents()){
    return true;
  } else {
    return false;
  }
}
//Comparison operator >= added
bool operator >=(const Money& amount1, const Money& amount2){
  if(amount1.getDollars()>amount2.getDollars()){
    return true;
  } else if(amount1.getDollars()==amount2.getDollars()
  && amount1.getCents()>amount2.getCents()){
    return true;
  } else if(amount1.getDollars()==amount2.getDollars()
  && amount1.getCents()==amount2.getCents()){
    return true;
  } else {
    return false;
  }
}

/* Return a percentage of the money amount in the calling object.
 * EX. if percentFigure is 10, then the value returned is 10% of the amount
 * of money represented by the calling object
 */
const Money Money::percent(int percentFigure) const{
  double amountDollarsNew, amountCentsNew, percentNew;
  percentNew = .01*percentFigure;
  if(getDollars()<10){
    amountCentsNew = getDollars()*percentNew;
    amountDollarsNew = 0;
  } else {
    amountDollarsNew = getDollars()*percentNew;
    amountCentsNew = getCents()*percentNew;
  }

  return Money(amountDollarsNew, amountCentsNew);
}


Money::Money(): dollars(0), cents(0) {
  //EMPTY
}

Money::Money(double amount) : dollars(dollarsPart(amount)), cents(centsPart(amount)){
  //EMPTY
}

Money::Money(int theDollars) : dollars(theDollars), cents(0) {
  //EMPTY
}

Money::Money(double theDollars, double theCents){
  if((theDollars<0 && theCents>0) || (theDollars>0 && theCents<0)){
    cout<<"Inconsistent money data"<<endl;
    exit(1);
  }
  dollars=theDollars;
  cents=theCents;
}

double Money::getAmount() const {
  return (dollars + cents*0.01);
}

int Money::getDollars() const{
  return dollars;
}

int Money::getCents() const{
  return cents;
}

int Money::dollarsPart(double amount) const{
  return static_cast<int>(amount);
}

int Money::centsPart(double amount) const{
  double doubleCents = amount*100;
  int intCents = (round(fabs(doubleCents)))%100;
  if(amount < 0) {
    intCents = -intCents;
  }
  return intCents;
}

int Money::round(double number) const{
  return static_cast<int>(floor(number+0.5));
}

ostream& operator <<(ostream& outputStream, const Money& amount){
  int absDollars = abs(amount.dollars);
  int absCents = abs(amount.cents);
  if(amount.dollars < 0 || amount.cents < 0){
    outputStream << "$-";
  } else {
    outputStream << '$';
    outputStream << absDollars;
  }
  if(absCents >= 10){
    outputStream << '.' <<absCents;
  } else{
    outputStream << '.' << '0'<< absCents;
  }

  return outputStream;
}

istream& operator >>(istream& inputStream, Money& amount){
  char dollarSign;
  inputStream >> dollarSign;
  if(dollarSign != '$'){
    cout<<"No dollar sign in Money input"<<endl;
    exit(1);
  }
  double amountAsDouble;
  inputStream>>amountAsDouble;
  amount.dollars = amount.dollarsPart(amountAsDouble);
  amount.cents = amount.centsPart(amountAsDouble);

  return inputStream;
}
