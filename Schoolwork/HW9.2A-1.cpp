#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<cstdlib>
using namespace std;

void print(ifstream& inStream, ofstream& outStream);

int main(){
    ifstream inStream;
    ofstream outStream;
    
    //opening file
    inStream.open("info2.txt");
    outStream.open("newinfo2.txt");
    //check failure
    if(inStream.fail()){
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }
    if(outStream.fail()){
        cout<<"Output file opening failed."<<endl;
        exit(1);
    }
    
    print(inStream,outStream);
    
    inStream.close();
    outStream.close();
    
    return 0;
    
}

void print(ifstream& inStream, ofstream& outStream){
    string str;
    string arr[100];
    int characterCount =0;
    
    //get each line in string
    while(getline(inStream, str)){
        characterCount=0;
        string firstName = "";
        string lastName = "";
        string quiz = "";
        double newQuiz[100];
        double avgScore=0;
                
        //get first name
        for(int i=0; i<str.length(); i++){
            if (str[i] != ' '){
                lastName += str[i];
                characterCount++;
            } else {
                break;
            }
        } 
        outStream<<lastName<<" ";
        
        //get last name
        for(int i=characterCount+1; i< str.length();i++){
            if (str[i] != ' '){
                firstName += str[i];
                characterCount++;
            } else {
                break;
            }
        }
        outStream<<firstName<<" ";
        
        double total=0;
        //get quiz
        for(int i=characterCount+1;i<str.length();i++){
            quiz += str[i];
            if(str[i]== ' ') {
                newQuiz[i] = atof(quiz.c_str());
                quiz="";
                total=total+newQuiz[i];
                outStream<<newQuiz[i]<<" ";
            }
        }
       
        outStream<<" "<<endl;
        outStream<<"Here is the average score: "<<total/10<<endl;
        
    }
}

        
        