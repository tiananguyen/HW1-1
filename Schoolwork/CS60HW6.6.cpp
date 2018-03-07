#include<iostream>
using namespace std;

// Recursive Fibonacci with an Array
int fibonacci(int num){
  int i=0;
  int fibArr[num];
	if(num<=0) {
    fibArr[i] = 1;
    i++;
    return 1;
  } else if(num==1) {
    fibArr[i] = 1;
    i++;
    return 1;
  } else {
    int a = fibonacci(num-1)+fibonacci(num-2);
    fibArr[i] = a;
    i++;
    return a;
  }
}

int main(){
  int num, fibNum;

  cout<<"Enter a number for the fibonacci sequence: "<<endl;
  cin>>num;
  fibNum = fibonacci(num);
  cout<<"Here is the number recursively: "<<fibNum<<endl;

  return 0;
}
