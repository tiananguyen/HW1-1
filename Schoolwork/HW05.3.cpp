#include<iostream>
#include<cmath>
using namespace std;

void calc(int side1, int side2, int side3, double& area, double& perim);

int main() {
	int side1, side2, side3;
	double area, semiPerim, perim;
    	
	cout<<"Enter side 1: "<<endl;
	cin>>side1;
	cout<<"Enter side 2: "<<endl;
	cin>>side2;
	cout<<"Enter side 3: "<<endl;
	cin>>side3;

    	if((side1+side2>side3) && (side2+side3>side1) && (side3+side1>side2)){
		calc(side1, side2, side3, area, perim);
		cout<<"This is the area: "<<area<<endl;
		cout<<"This is the perimeter: "<<perim<<endl;
	} else {
		cout<<"The values you inputted isn't a triangle."<<endl;
	}


}

void calc(int side1, int side2, int side3, double& area, double& perim) {
	double semiPerim;
	semiPerim = ((side1 + side2 + side3)/2);
	area = sqrt(semiPerim*(semiPerim-side1)*(semiPerim-side2)*(semiPerim-side3));
	perim = semiPerim*2;
}
	
