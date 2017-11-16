//Write a code that reads into a file and takes the students' average and prints out the name of the sutdent who got above the average GPA
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

void average(StudentInfo arr[], int size);

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

    average(student,i);

    inStream.close();

    return 0;
}

void average(StudentInfo arr[], int size){
    double total=0;
    for(int i=0;i<size;i++){
        total=total+arr[i].gpa;
    }
    double avg=total/size;
    cout<<avg<<endl;
    for(int i=0; i<size;i++){
        if(arr[i].gpa>avg){
            cout<<arr[i].firstName<<" ";
            cout<<arr[i].lastName<<endl;
        }
    }

}
