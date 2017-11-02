//Encrypt letters so that it shifts the letters forward.
#include<iostream>
#include<string>
using namespace std;

string encrypt(string in, int shift);

int main() {
    string in, in2;
    int shift;

    cout<<"Enter the string: "<<endl;
    cin>>in;

    cout<<"Enter shift: "<<endl;
    cin>>shift;

    in2=encrypt(in, shift);
    cout<<"Encrypted word is: "<<in2<<endl;

    return 0;
}

string encrypt(string in, int shift){
    string str;
    char c;
    for(int i=0; i<in.length(); i++){
        c=in[i];
        c=c+shift;
        str=str+c;
    }
    return str;
}
