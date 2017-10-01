#include <iostream>
using namespace std;

/*Write a program to convert from gallons to liters. The program should allow
the user to input the amount with decimal places and then see the result on the screen. */

int main() {
	double gallons;
	double liters;

  //ask and take input from user
	cout << "Enter the number of gallons you would like the convert: ";
	cin >> gallons;

	//convert to liters
	liters=3.7854*gallons;
	cout << "The amount of liters is: " << liters <<endl;
	return 0;
}
