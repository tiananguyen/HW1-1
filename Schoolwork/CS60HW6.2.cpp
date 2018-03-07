#include<iostream>
using namespace std;

// Recursive Factorial Function
int factorial(int num) {
	int newNum;
	if(num <= 1) {
    return 1;
  } else {
    newNum = num * factorial(num - 1);
  	return newNum;
  }
}

// Recurive Combination Function
int c(int n, int r) {
  if(r==0) {
    return 1;
  } else if(n==r) {
    return 1;
  } else {
		return factorial(n)/(factorial(r)*(factorial(n-r)));
  }
}

int main() {
  int n1, r1, num;
  cout<<"Enter the number of r different things: "<<endl;
  cin>>r1;
  cout<<"Enter the set of n things: "<<endl;
  cin>>n1;

  num = c(n1, r1);
  cout<<"Here is the number of combinations: "<<num<<endl;

  return 0;
}

// return (n/r)*c(n-1,r-1);
