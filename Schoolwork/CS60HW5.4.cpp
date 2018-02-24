#include"CS60HW54.h"
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
  int c[7]={1,2,3,4,5,6,7};
  string d[6]={"ab","bc","cd","de","ef","fg"};
  cout<<"Here are the values before: "<<endl;
  for(int i=0; i<7; i++){
    cout<<c[i]<<" ";
  }
  cout<<endl;
  for(int i=0; i<6; i++){
    cout<<d[i]<<" ";
  }
  cout<<endl;

  DynamicStringArray<int> a(7, c);
  DynamicStringArray<string> b(6, d);
  a.addEntry(8);
  cout<<"Here is the new size of array 1: "<<a.getSize()<<endl;
  b.addEntry("gh");
  cout<<"Here is the new size of array 2: "<<b.getSize()<<endl;
  cout<<"Here is the entry of array 1 for position 5: "<<a.getEntry(5)<<endl;
  cout<<"Here is the entry of array 2 for position 2: "<<b.getEntry(2)<<endl;

  return 0;
}
