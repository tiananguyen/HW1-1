#include <iostream>
using namespace std;

int main() {
	double weight;
	double numMets;
	double minutes;
	double caloriesBurned;

        //ask and take input from user
	cout << "Enter your weight in pounds: ";
	cin >> weight;
        cout << "Enter the number of METS for your activity: ";
        cin >> numMets;
        cout << "Enter the number of minutes you spent on your activity: ";
	cin >> minutes;

	//convert to total number of calories burned
	caloriesBurned=(0.0175)*(numMets)*(weight/2.2)*(minutes);
	cout << "This is the total number of calories burned: " << caloriesBurned <<endl ;
	return 0;
}
