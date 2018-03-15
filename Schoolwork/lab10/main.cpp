// For auto : g++ --std=c++11 main.cpp
#include"bag.h"
#include<iostream>
using namespace std;

int main(){
  int a[5] = {1,2,3,4,5};
  bag<int> b(a,5);

  // Auto Loop
  for(auto i : b){
    cout<<i;
  }
  cout<<endl;

  // Iterator Loop
  bag<int>::iterator i;
  for(i = b.begin(); i!=b.end(); i++){
    cout<<*i<<" ";
  }
  cout<<endl;

}
