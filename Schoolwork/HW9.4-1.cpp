#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<cstdlib>
using namespace std;

void average(ifstream& inStream);

int main(){
    ifstream inStream;
    int avgWord=0;
    
    //opening file
    inStream.open("words.txt");
    
    //check failure
    if(inStream.fail()){
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }
    
    average(inStream);
        
    inStream.close();
    
    return 0;
}
        
void average(ifstream& inStream){
    string str;
    int wordCount =0;
    int size=0;
    double wordNum[size];
    int avgWord=0;
    int characterCount=0;
    
    while(getline(inStream, str)){
        //look thru  
        wordCount++;
        for(int i=0;i<str.length();i++){
            if(str[i]==' '){
                wordCount++;
            }
        }
        for(int i=0;i<str.length();i++){
            if(str[i]!=' '||str[i]!='.'||str[i]!=','){
                characterCount++;
            }
        }
    }
    cout<<"Here is the average: "<<characterCount/wordCount<<endl;

}
        