#include <iostream>
#include <string>
/*Write a program, using a switch statement, that prompts the user 
to enter the day of the week, and prints out their schedule according to the following. */

using namespace std;
int main(){
    char day;
    cout<<"Enter a letter for the day of the week : (A)=Monday, (B)=Tuesday, (C)=Wednesday, (D)=Thursday, (E)=Friday. "<<endl;
    cin>>day;

    switch(day){
    case 'A': cout<<"CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45"<<endl;
    break;
    case 'B': cout<<"PHYS 2 at 12:10, CSCI 10 lab at 2:15"<<endl;
    break;
    case 'C': cout<<"CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45"<<endl;
    break;
    case 'D': cout<<"PHYS 2 at 12:10"<<endl;
    break;
    case 'E' : cout<<"CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45"<<endl;
    break;
    default : cout<<"That is not a valid day! Try again."<<endl;
    }
return 0;
}
