#include<iostream>
using namespace std;

int water(int n){
  if(n==0){
    return 10;
  } else {
    return ((water(n-1)/2)+1);
  }
}

int main() {
  cout<<"Here is the amount of water: "<<endl;
  cout<<water(1)<<" gallons"<<endl;

  return 0;
}
