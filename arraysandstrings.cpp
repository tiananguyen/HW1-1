//Check if a word is the reverse of another
#include<iostream>
#include<string>
using namespace std;

int main (){
  string s1, s2;
  int count=0;

  cout<<"Enter string 1: "<<endl;
  cin>>s1;
  cout<<"Enter string 2: "<<endl;
  cin>>s2;

  if(s1.length() == s2.length()){
    for(int i=0;i<s1.length();i++){
      for(int j=s2.length();j>0;j--){
        if(s2[j]==s1[i]){
          continue;
          count++;
        } else {
          break;
          cout<<"Not the reverse of the word!"<<endl;
        }
      }
    }
    if(count==s1.length()){
      cout<<"It is the reverse of the word!"<<endl;
    }
  } else {
    cout<<"Not the reverse of the word!"<<endl;
  }
  return 0;
}
