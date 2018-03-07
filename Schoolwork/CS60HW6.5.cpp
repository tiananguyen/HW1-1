#include<iostream>
#include<ctime>
using namespace std;

// Recursive Fibonacci
int fibonacciR(int num){
	if(num<=0) {
    return 1;
  } else if(num==1) {
    return 1;
  } else {
    return fibonacciR(num-1)+fibonacciR(num-2);
  }
}
// Iterative Fibonacci
int fibonacciI(int num){
  int prev=1, current=1, future=0;
  if(num<=0) {
    return 1;
  } else if(num==1) {
    return 1;
  } else {
    for(int i=0; i<num-1; i++){
        future = current + prev;
        prev = current;
        current = future;
    }
    return future;
  }
}

int main(){
  int num, fibNumR, fibNumI;

  cout<<"Enter a number for the fibonacci sequence: "<<endl;
  cin>>num;
  // Recursive Fibonacci Test
  int start_s1=clock();
  fibNumR = fibonacciR(num);
  int stop_s1=clock();
  cout<<"Here is the number recursively: "<<fibNumR<<endl;
  cout<<"Here is the time for recursive fibonacci: "
  <<(stop_s1-start_s1)/double(CLOCKS_PER_SEC)*1000<<" seconds"<<endl;

  // Iterative Fibonacci Test
  int start_s2=clock();
  fibNumI = fibonacciI(num);
  int stop_s2=clock();
  cout<<"Here is the number iteratively: "<<fibNumI<<endl;
  cout<<"Here is the time for recursive fibonacci: "
  <<(stop_s2-start_s2)/double(CLOCKS_PER_SEC)*1000<<" seconds"<<endl;

}
