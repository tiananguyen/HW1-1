#include<iostream>
using namespace std;

//Creating class CounterType
class CounterType{
public:
  CounterType(int x);
  void countAdd();
  void countSub();
  int countReturn();
  void output();
  CounterType();
private:
  int count;
};

//Function to set counter to count
CounterType::CounterType(int x){
  count=x;
}
//Function to increase the count by 1
void CounterType::countAdd(){
  count++;
}
//Function to decrease the count by 1
void CounterType::countSub(){
  if(count>0){
    count--;
  }
}
//Return the count
int CounterType::countReturn(){
  return count;
}
//Output the count
void CounterType::output(){
  cout<<count<<endl;
}

int main(){
  //Using the class and functions from the class
  CounterType countAmount(10);
  countAmount.countAdd();
  //countAmount.countSub();
  countAmount.countReturn();
  countAmount.output();

  return 0;
}
