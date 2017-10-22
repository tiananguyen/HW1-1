#include<iostream>
using namespace std;

void input(int& hour, int& minute);
void output(int& hour, int& minute, char& ampm);
void conversion(int& hour, char& ampm);

int main() {
    int hour,minute;
    char ampm, answer;
    
    do {
    input(hour, minute);
    conversion(hour, ampm);
    output(hour, minute, ampm);
    cout<<"Would you like the run this program again?(Y or N)"<<endl;
    cin>>answer;
    } while(answer== 'Y' || answer=='y');
}

void input(int& hour, int& minute) {
    cout<<"Enter the hour in 24-hour notation: "<<endl;
    cin>>hour;
    
    cout<<"Enter the minute: "<<endl;
    cin>>minute;
}

void conversion(int& hour, char& ampm) {
    if(hour>12){
        hour-=12;
        ampm = 'p';
    }else if(hour==12){
        ampm='p';
    } else {
        ampm='a';
    }
}

void output(int& hour, int& minute, char& ampm){
    cout<<"This is the time: "<<hour<<":"<<minute<<" "<<ampm<<endl;
}
        
