#include<iostream>
using namespace std;

struct Grade {
    double quiz1;
    double quiz2;
    double midterm;
    double finalTest;
    double avg;
};

int main(){
    Grade student;

    cout<<"Enter quiz grade 1: "<<endl;
    cin>>student.quiz1;
    cout<<"Enter quiz grade 2: "<<endl;
    cin>>student.quiz2;
    cout<<"Enter miderm grade: "<<endl;
    cin>>student.midterm;
    cout<<"Enter final grade: "<<endl;
    cin>>student.finalTest;
    
    student.avg = ((((student.quiz1+student.quiz2)/20)*.25)+((student.midterm/100)*.25)+((student.finalTest/100)*.5))*100;
    
    cout<<"Here is the average: "<<student.avg<<endl;
    
    if(student.avg >= 90){
        cout<<"Your grade is an A! Good job!"<<endl;
    }else if(student.avg < 90 && student.avg >=80){
        cout<<"Your grade is a B! Nice try!"<<endl;
    }else if(student.avg < 80 && student.avg >= 70){
        cout<<"Your grade is a C. Try harder!"<<endl;
    }else if(student.avg <70 && student.avg >= 60){
        cout<<"Your grade is a D. Keep on working."<<endl;
    }else if(student.avg < 60 ){
        cout<<"Your grade is a F. Go see the teacher."<<endl;
    }
    return 0;
}
