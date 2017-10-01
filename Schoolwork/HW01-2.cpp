#include <iostream>
using namespace std;

int main() {
	double weightOfMouse;
	double weightOfPerson;
	double amountToKillMouse;
	double amountToKillPerson;
	double amountOfDietSoda;
	const double SWEETENER = 0.001;

	//ask and take input from user
	cout << "Enter the weight in which you wish to stop dieting: ";
	cin >> weightOfPerson;
	cout << "Enter the weight of the mouse: ";
	cin >> weightOfMouse;
        cout << "Enter amount it takes to kill the mouse: ";
	cin >> amountToKillMouse;

	//calculate the amount it takes to kill a person and amount of diet soda
	amountToKillPerson = (amountToKillMouse * weightOfPerson) / weightOfMouse;
	amountOfDietSoda = amountToKillPerson / SWEETENER;
        cout << "You can drink "<< amountOfDietSoda << " before dying!"<<endl;

}
