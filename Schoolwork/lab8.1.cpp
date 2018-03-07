#include<iostream>
using namespace std;

int salary(int n){
  if(n==0){
    return 50000;
  } else {
    return ((salary(n-1)*1.1) + 5000);
  }
}

int main() {
  cout<<"Here is your salary: "<<endl;
  cout<<"$"<<salary(1)<<endl;

  return 0;
}
