#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string caps(string str);
string remove(string str);

int main() {
    string str, str2;
    
    cout<<"Enter up to 100 characters: "<<endl;
    getline(cin,str);
    
    str2=remove(str);
    str2=caps(str);
    cout<<str2<<endl;
    return 0;
}

string remove(string str){
    for(int i=0; i<str.length()-1;i++){
        if(str[i]==' '&& str[i+1]==' '){
            str.erase(str.at(i),1);
        }
    }
    return str;
}
            
string caps(string str){
    string temp(str);
    if(temp[0]!=' '){
        temp[0]=toupper(temp[0]);
        for(int i=1;i<str.length(); i++){
            temp[i]=tolower(str[i]);
        }
    } else {
        temp[1]=toupper(temp[1]);
        for(int i=2; i<str.length(); i++){
            temp[i]=tolower(str[i]);
        }
    }
    return temp;
}
    