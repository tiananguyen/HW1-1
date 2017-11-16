#include<fstream>
#include<iostream>
#include<cstdlib>
using namespace std;

struct StudentInfo {
    string firstName;
    string lastName;
    string classLevel;
    double gpa;
};

int main(){
    StudentInfo student[1000];
    int i=0;
    ifstream inStream;
    inStream.open("studentlist.txt");

    if(inStream.fail()){
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }

    while(inStream>>student[i].firstName){
        inStream>>student[i].lastName;
        inStream>>student[i].classLevel;
        inStream>>student[i].gpa;
        i++;
    }

    //test by printing out
    for(int j=0; j<i;j++){
        cout<<student[j].firstName<<endl;
        cout<<student[j].lastName<<endl;
        cout<<student[j].classLevel<<endl;
        cout<<student[j].gpa<<endl;
    }

    inStream.close();

    return 0;
}
