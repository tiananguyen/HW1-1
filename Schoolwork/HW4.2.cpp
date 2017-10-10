/* Write the definition of a function isPositive, that receives an integer parameter and returns true
if the parameter is positive, and false otherwise. */

#include <iostream>

bool isPositive(int i) {
	if(i > 0){
		return true;
	} else if (i < 0) {
		return false;
	}
}

using namespace std;
main(){
	isPositive();
}
