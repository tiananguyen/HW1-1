#include <iostream>

/*Clunker Motors Inc. is recalling all vehicles from model years 1995-1998 and 2004-2006. A bool variable named
recalled has been declared. Given an int variable modelYear write a statement that assigns true to recalled if
the value of modelYear falls within the two recall ranges (the first range being 1995-1998, the second range being
2004-2006) and assigns false otherwise.*/

main(){
	int modelYear;
	bool recalled;
	
	if(modelYear >= 1995 && modelYear <= 1998) {
		recalled = true;
	} else if(modelYear >= 2004 && modelYear <= 2006) {
		recalled = true;
	} else {
		recalled = false;
	}

}
