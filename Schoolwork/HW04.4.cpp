/*Use wind chill index equation to determine what the wind chill will be. Make sure
that the temperature has Celsius less than 10 degrees.*/
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

double windChillIndex(double windSpeed, double temp);

int main(){
	double windSpeed, temp;

    	cout<<"Enter the wind speed in m/sec: "<<endl;
    	cin>>windSpeed;
	while(true){
    		cout<<"Enter the temperature(must be at most 10 degrees Celsius): "<<endl;
		cin>>temp;
		if (temp<=10) {
			break;
		} else {
			cout<<"Try again!"<<endl;
		}
	}

    	cout<<"The gravitational attractive force between the two bodies is "<<windChillIndex(windSpeed,temp)<<endl;

    	return 0;
}

double windChillIndex(double windSpeed, double temp){
	return (33-((((10*(sqrt(windSpeed)))-windSpeed+10.5)*(33-temp))/23.1));
}
