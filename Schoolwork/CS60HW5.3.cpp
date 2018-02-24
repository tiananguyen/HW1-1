#include"CS60HW53.h"
#include<iostream>
#include<string>
using namespace std;

int main(){
  int c[6]={1,2,3,4,5,6};
  string d[6]={"ab","bc","cd","de","ef","fg"};
  cout<<"Here are the values before: "<<endl;
  for(int i=0; i<6; i++){
    cout<<c[i]<<" ";
  }
  cout<<endl;
  for(int i=0; i<6; i++){
    cout<<d[i]<<" ";
  }
  cout<<endl;

  Items<int> a(6, c);
  Items<string> b(6, d);
  a.addNewItem(7);
  b.addNewItem("gh");
  cout<<"Here are the values after: "<<endl;
  for(int i=0; i<7; i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  for(int i=0; i<7; i++){
    cout<<b[i]<<" ";
  }
  cout<<endl;
  cout<<"Here are the number of items in the first array: "<<a.getNumItem()<<endl;

  return 0;
}
