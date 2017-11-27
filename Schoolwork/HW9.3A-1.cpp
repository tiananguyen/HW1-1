#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<cstdlib>
#include<iomanip>
using namespace std;

void print(ifstream& inStream, ofstream& outStream);
void replace(ifstream& inStream, ofstream& outStream);

int main(){
    ifstream inStream;
    ofstream outStream;
    
    //opening file
    inStream.open("info3.txt");
    outStream.open("newinfo3.txt");
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
    
    //replace
    ifstream inStream2;
    ofstream outStream2;
    //opening file
    inStream2.open("newinfo3.txt");
    outStream2.open("info3.txt");
    //check failure
    if(inStream2.fail()){
        cout<<"Input file opening failed."<<endl;
        exit(1);
    }
    if(outStream2.fail()){
        cout<<"Output file opening failed."<<endl;
        exit(1);
    }
    replace(inStream2, outStream2);
    
    inStream2.close();
    outStream2.close();

    return 0;
    
}

void print(ifstream& inStream, ofstream& outStream){
    string str;
    string arr[100];
    int characterCount =0;
    outStream<<"This file will print out the students' names, grades, and quiz average."<<endl;
    
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
        outStream<<lastName<<setw(5);
        
        //get last name
        for(int i=characterCount+1; i< str.length();i++){
            if (str[i] != ' '){
                firstName += str[i];
                characterCount++;
            } else {
                break;
            }
        }
        outStream<<firstName<<setw(5);
        
        double total=0;
        //get quiz
        for(int i=characterCount+1;i<str.length();i++){
            quiz += str[i];
            if(str[i]== ' ') {
                newQuiz[i] = atof(quiz.c_str());
                quiz="";
                total=total+newQuiz[i];
                outStream<<newQuiz[i]<<setw(5);
            }
        }
       
        outStream<<setw(5)<<endl;
        outStream<<"Here is the average score: "<<total/10<<endl;
        
    }
}

void replace(ifstream& inStream2, ofstream& outStream2){
    char ch;
    while(!inStream2.eof()){
        inStream2.get(ch);
        outStream2<<ch;
    }
}
        