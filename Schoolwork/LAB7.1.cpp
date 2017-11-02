#include<iostream>
#include<string>
using namespace std;

string partString(string s, int startPos, int length);

int main() {
    string s, s2;
    int startPos, length;

    cout<<"Enter the string: "<<endl;
    cin>>s;

    cout<<"Enter the starting position: "<<endl;
    cin>>startPos;

    cout<<"Enter the length of what you want to print: "<<endl;
    cin>>length;

    s2 = partString(s, startPos, length);
    cout<<"Here is the new string: "<<s2<<endl;

    return 0;

}
string partString(string s, int startPos, int length) {
    string part;
    for(int i=startPos; i<startPos+length; i++){
        part = part+s[i];
    }
    return part;
}
