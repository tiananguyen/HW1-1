#include<fstream>
#include<iostream>
#include<cstdlib>
using namespace std;

double average(double arr[],int size);

int main(){
    ifstream inStream;
    double score[1000];
    int i=0;

    inStream.open("score.txt");

    if(inStream.fail()){
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }

    while(inStream>>score[i]){
        i++;
    }
    inStream.close();

    cout<<average(score,i)<<endl;

    return 0;
}

double average(double arr[], int size){
    double total=0;
    for(int i=0;i<size;i++){
        total=total+arr[i];
    }
    return total/size;
}
