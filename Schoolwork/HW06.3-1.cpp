#include<iostream>
#include<cmath>
using namespace std;

double stddev(double a[], int size) {
    double avg=0, sum=0, dev=0, sum2=0;
    int i;
    
    cout<<"How many values do you want to enter? "<<endl;
    cin>>size;
    cout<<"Enter in "<<size<<" values to compute the standard deviation: "<<endl;
    for(int i =0; i<size; i++){ //putting values into array
        cin>>a[i];
    }
    for(int i = 0; i< size; i++){ //finding sum of the values
        sum+=a[i];
    }
    avg = sum/size; //finding average of values
    for(int i =0; i<size; i++){ //finding second sum
        sum2+=pow((a[i]-avg),2);
    }
    for(int i=0; i<size; i++){ //finding deviation
        dev=sqrt(sum2/size);
    }
    return dev;
}

int main() {
    int size;
    double a[size],answer;
    
    answer = stddev(a, size);
    cout<<"Here is the standard deviation: "<<answer<<endl;
    
    return 0;
}
