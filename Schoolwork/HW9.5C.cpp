#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

int main() {
    ifstream inStream;
    ofstream outStream;
    string str;
    
    inStream.open("error.txt");
    outStream.open("fix.txt");
    
    //check failure
    if(inStream.fail()){
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }
    if(outStream.fail()){
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }
    
    while(getline(inStream, str)){
        for(int i=0;i<str.length();i++){
            if(str[i]=='c'&&str[i+1]=='i'&&str[i+2]=='n'){
                str[i+3]='>';
                str[i+4]='>';
            } if(str[i]=='c'&&str[i+1]=='o'&&str[i+2]=='u'&&str[i+3]=='t'){
                str[i+4]='<';
                str[i+5]='<';
            }
            outStream<<str[i];
        }
    }
    inStream.close();
    outStream.close();
    
    return 0;
}
