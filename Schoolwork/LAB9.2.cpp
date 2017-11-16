#include<fstream>
#include<iostream>
#include<cstdlib>
using namespace std;

double average(double arr[],int size);

int main(){
    ifstream inStream;
    ofstream outStream;
    double score[1000];
    int i=0;

    inStream.open("score.txt");
    outStream.open("avg.txt");

    if(inStream.fail()){
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }
    if(outStream.fail()){
        cout<<"Output file opening failed."<<endl;
        exit(1);
    }

    while(inStream>>score[i]){
        i++;
    }

    double avgScore = average(score,i);
    outStream<<avgScore<<endl;

    for(int j=0; j<i;j++){
        if(score[j]>avgScore){
            outStream<<score[j]<<endl;
        }
    }
    inStream.close();
    outStream.close();

    return 0;
}

double average(double arr[], int size){
    double total=0;
    for(int i=0;i<size;i++){
        total=total+arr[i];
    }
    return total/size;
}
