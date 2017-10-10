/*Write the definition of a function min that has two int parameters and returns the smaller.*/
#include<iostream>

int min(int i, int j) {
	if(i < j) {
		return i;
	} else if (j<i){
		return j;
	}
}

using namespace std;
main() {
  min();
}
