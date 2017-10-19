#include<iostream>
using namespace std;

double avgMax(double& max, double& avg);

int main() {
    double max=0, avg=0;
    avgMax(max,avg);
    cout<<"This is the max: "<<max<<endl;
    cout<<"This is the avg: "<<avg<<endl;
}

double avgMax(double& max, double& avg){
    double val=0, total=0, count=0;
    cout<<"Please enter a value, or -1 when you're done."<<endl;
    cin>>val;
    while(val!= -1){
        if(val>max){
            max=val;
        }
        total+=val;
        count++;
        cout<<"Please enter a value, or -1 when you're done."<<endl;
        cin>>val;
    }
    avg= total/count;
}
