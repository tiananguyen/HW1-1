/*Write a code that generates the x, y coordinates for a projectile at all values of x from 0 to 9. Your
pseudocode should take all necessary variables as input from the user. Be sure to format your x, y pairs as: (0, 10)
(for example) with one pair per line. */

#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double angle, speed, initialHeight, speedS, distanceS, formula;
	const double gravity = 9.81;
	int distance = 0;

	cout<<"What is the speed of the projectile? "<<endl;
	cin>>speed;
	cout<<"What is the initial height of the projectile? "<<endl;
	cin>>initialHeight;
	cout<<"What is the angle of the projectile? "<<endl;
	cin>>angle;

	while(distance < 10) {
		distanceS = pow(distance,2);
		speedS = pow(speed*cos(angle),2);
		formula = initialHeight + (distance*(tan(angle))) - (gravity*distanceS)/(2*(speedS));
		cout<<"This is the height of your projectile: "<<formula<<endl;
		cout<<"This is the coordinate of your projectile: ( "<<distance<<" , "<<formula<<" )"<<endl;
		distance++;
	}
	return 0;
}
