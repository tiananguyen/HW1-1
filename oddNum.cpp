//Given two integers, print out the odd numbers between them

#include<iostream>
using namespace std;

int main() {
  int int1, int2;

  // Ask user for input
  cout<<"Enter the lower integer"<<endl;
  cin>>int1;
  cout<<"Enter the higher integer"<<endl;
  cin>>int2;

  // Find the odd numbers between the two integers given
  cout<<"Here are the odd numbers: "<<endl;
  for(int i=int1;i<=int2;i++){
    if(i%2==1||i%2==-1){
      cout<<i<<endl;
    }
  }

  return 0;
}
