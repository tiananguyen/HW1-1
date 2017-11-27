#include<fstream>
#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    ifstream inStream1;
    ifstream inStream2;
    ofstream outStream;
    int num[10000];
    int i=0;
    
    inStream1.open("num1.txt");
    inStream2.open("num2.txt");
    outStream.open("num3.txt");
    
    
    if(inStream1.fail()){
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }
    if(inStream2.fail()){
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }
    if(outStream.fail()){
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }
    
    while(inStream1>>num[i]){
        i++;
    }
    while(inStream2>>num[i]){
        i++;
    }
    
    //sort array
    for(int j=i; j>0;j--){
        for(int k=0;k<j;k++){
            if(num[k]>num[k+1]){
                int temp = num[k+1];
                num[k+1] = num[k];
                num[k]=temp;
            }
        }
    }
    
    for(int j=1; j<i;j++){
        outStream<<num[j]<<endl;
    }
    inStream1.close();
    inStream2.close();
    outStream.close();
    
    return 0;
}