#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main() {
    string str;
    
    /*TEST STRING
     * string str="1234";
     */
    
    cout<<"Enter a number: "<<endl;
    getline(cin,str);
    
    for(int i=0;i<str.length();i++){
        static_cast<int>(str[i])-48;
    }
    
    cout<<"This is the int: "<<str<<endl;
    
    return 0;
}