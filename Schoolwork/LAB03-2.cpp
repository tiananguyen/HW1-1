/*  Change your code from 1 so that it still increments x by one every time, but it continues until the y value
falls below the x axis. */

#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double angle, speed, initialHeight, speedS, distanceS, formula;
        int distance = 0;
	const double gravity = 9.81;

	cout<<"What is the speed of the projectile? "<<endl;
	cin>>speed;
	cout<<"What is the initial height of the projectile? "<<endl;
	cin>>initialHeight;
	cout<<"What is the angle of the projectile? "<<endl;
	cin>>angle;

	distanceS = pow(distance,2);
	speedS = pow(speed*cos(angle),2);
	formula = initialHeight + (distance*(tan(angle))) - (gravity*distanceS)/(2*(speedS));

	while(formula>=0) {
		cout<<"This is the height of your projectile: "<<formula<<endl;
		cout<<"This is the coordinate of your projectile: ( "<<distance<<" , "<<formula<<" )"<<endl;
        	distance++;
		distanceS = pow(distance,2);
		speedS = pow(speed*cos(angle),2);
		formula = initialHeight + (distance*(tan(angle))) - (gravity*distanceS)/(2*(speedS));
	}
	return 0;
}
