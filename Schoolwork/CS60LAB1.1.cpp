#include<iostream>
#include<string>
using namespace std;

struct Time{//military time, no am/pm
int hour;
int minute;
};

Time earlier(Time t1, Time t2){
    Time ret;
    if(t1.hour == t2.hour){
        if(t1.minute<t2.minute)
            ret = t1;
        else
            ret = t2;
    }
    else if(t1.hour<t2.hour){
        ret = t1;
    }
    else{
        ret = t2;
    }
    return ret;
}

class Carpool {
public:
    string names[5];
    int number;
    Time arrival;
    Carpool combineCarpool(Carpool car2);



};
Carpool Carpool:: combineCarpool(Carpool car2){
        Carpool combineCars;
        if(number + car2.number < 6) {
            for(int i=0; i<number; i++){
                combineCars.names[i]=names[i];
            }
            for(int i=0; i<car2.number;i++){
                combineCars.names[i+number]=car2.names[i];
            }
            combineCars.number = number + car2.number;
            combineCars.arrival = earlier(arrival,car2.arrival);
        } else {
            for(int i=0; i<number; i++){
                combineCars.names[i]=names[i];
            }
            combineCars.number = number;
            combineCars.arrival = arrival;
        }
        return combineCars;
    }

int main() {
    Carpool car1, car2;

    cout<<"Enter the number of people in car 1: "<<endl;
    cin>>car1.number;
    for(int i=0;i<car1.number;i++){
        cout<<"Enter the names in car 1: "<<endl;
        cin>>car1.names[i];
    }
    cout<<"Enter hour of arrival time for car 1: "<<endl;
    cin>>car1.arrival.hour;
    cout<<"Enter the minute of arrival time for car 1: "<<endl;
    cin>>car1.arrival.minute;

    cout<<"Enter the number of people in car 2: "<<endl;
    cin>>car2.number;
    for(int i=0;i<car2.number;i++){
        cout<<"Enter the names in car 2: "<<endl;
        cin>>car2.names[i];
    }
    cout<<"Enter hour of arrival time for car 2: "<<endl;
    cin>>car2.arrival.hour;
    cout<<"Enter the minute of arrival time for car 2: "<<endl;
    cin>>car2.arrival.minute;


    Carpool newCar = car1.combineCarpool(car2);
    cout<<"Here are the members of the car: "<<endl;
    for(int i=0;i<newCar.number;i++){
        cout<<newCar.names[i]<<endl;
    }
    cout<<"Here is the amount of people: "<<newCar.number<<endl;
    cout<<"Here is the time of arrival: "<<newCar.arrival.hour<<":"<<newCar.arrival.minute<<endl;
    return 0;
}
