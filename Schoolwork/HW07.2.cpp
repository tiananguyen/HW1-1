#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    string str;
    int charCount[26]={0};
    char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int wordCount = 1;
    
    cout<<"Enter in your sentence: "<<endl;
    getline(cin,str);

    //count words
    for(int i=0; i<str.length(); i++){
        if(str[i]==' '){
            wordCount++;
        }
    }
    
    //delete spaces
    for(int i=0; i<str.length(); i++){
        if(str[i]==' '){
            str.erase(i,1);
        }
    }
    
    //make everything lowercase
    for(int i=0;i<str.length();i++){
        tolower(str[i]);
    }
    
    //count letters
    cout<<wordCount<<"\t"<<"words"<<endl;
    int newStr;
    for(int i=0; i<str.length();i++){
        newStr=str[i];
        if(isalpha(newStr)){
            charCount[newStr-'a']++;
        }
    }
    for(int i=0; i<26;i++){
        if(charCount[i]>0){
            cout<<alpha[i]<<"\t"<<charCount[i]<<endl;
        }
    }
    
    return 0;
}

