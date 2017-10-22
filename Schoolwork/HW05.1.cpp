#include<iostream>
using namespace std;

int main() {
    for(int i=0; i<5; i++){
        cout<<"start ";
        for(int j=-1; j<7; j++){
            if(i<=j){
                cout<<"X";
            }else {
                cout<<"O";
            }
        }
        cout<<" end"<<endl;
    }
}