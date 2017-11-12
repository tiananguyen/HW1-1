//Write a program that sees if word 1 is the permutation of word 2
#include<iostream>
using namespace std;

int main(){
    bool same;
    //test array
    char a1[]={'c','a','t'};
    char a2[]={'a','t','c'};
    
    //sort a1
    for(int i=2;i>0;i--){
        for(int j=0;j<i;j++){
            if(a1[j]>a1[j+1]){
                int temp=a1[j+1];
                a1[j+1]=a1[j];
                a1[j]=temp;
            }
        }
    }
    //sort a2
    for(int i=2;i>0;i--){
        for(int j=0;j<i;j++){
            if(a2[j]>a2[j+1]){
                int temp=a2[j+1];
                a2[j+1]=a2[j];
                a2[j]=temp;
            }
        }
    }
    same = false;
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            if(a1[i]==a2[j]){
                same=true;
            }else{
                same = false;
                break;
            }
        }
    }
    if(same==true){
        cout<<"It is a permutation!"<<endl;
    } else {
        cout<<"Not a permutation"<<endl;
    }
    return 0;
}