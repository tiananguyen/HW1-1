#include"npoint.h"
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
  int a[2]={2,6};
  int c[3]={2,4,5};
  string b[5]={"hello","how","are","you","today"};
  int x = 5;
  int y = 2;
  Npoint<string> point2(x);
  Npoint<int> point1(y,a);
  Npoint<int> point3(y,c);
  cout<<point2.getItem()<<endl;
  cout<<point1.getSize()<<endl;

  point1 = point3;
  cout<<point1.getSize()<<endl;
  cout<<point1.getItem()<<endl;

  Npoint<int> point4 = point1 + point3;

  return 0;

}
