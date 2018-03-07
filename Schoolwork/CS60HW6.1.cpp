#include<iostream>
using namespace std;

int fibonacci(int num){
	if(num<=0) {
    return 1;
  } else if(num==1) {
    return 1;
  } else {
    return fibonacci(num-1)+fibonacci(num-2);
  }
}

int main() {
  int num, fibNum;

  cout<<"Enter a number for the fibonacci sequence: "<<endl;
  cin>>num;
  fibNum = fibonacci(num);
  cout<<"Here is the number: "<<fibNum<<endl;

  return 0;
}
