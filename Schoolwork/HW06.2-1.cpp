#include<iostream>
using namespace std;

void deleteRepeats(char a[], int& size);

int main() {
    int size;
    char a[size];
    
    cout<<"Enter how many letters you would like to input? "<<endl;
    cin>>size;
    cout<<"Enter "<<size<<" letters."<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    
    deleteRepeats(a,size);
    
    cout<<"Here is the new array without repeated letters: "<<endl;
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }
    cout<<"Here is the array size: "<<size<<endl;
    
    return 0;
}

void deleteRepeats(char a[], int& size){
    int numLetters = 0;
    bool same;
    for(int i=0; i<size; ++i){
        same = false;
        for(int j=0;j< numLetters; ++j){
            if(a[i]==a[j]){
                same = true;
            }
        }
        if (!same){
            a[numLetters++]=a[i];
        }
    }
    size=numLetters;
}