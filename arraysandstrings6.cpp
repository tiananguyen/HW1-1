/*
 * Given a group of two strings, you need to find the longest uncommon
 * subsequence of this group of two strings. The longest uncommon subsequence
 * is defined as the longest subsequence of one of these strings and this
 * subsequence should not be any subsequence of the other strings.
 */

#include<iostream>
#include<string>
using namespace std;

int main(){
  string str1;
  string str2;
  int count=0;
  int newCount=0;
  int minLength=1;

  // Ask user for input
  cout<<"Enter in the first string:" <<endl;
  cin>>str1;
  cout<<"Enter in the second string: "<<endl;
  cin>>str2;

  // Check which string is shorter
  int length1=str1.length();
  int length2=str2.length();
  if(length1<length2){
    minLength=length1;
  } else{
    minLength=length2;
  }

  // Check for the uncommon subsequence length
  for(int i=0;i<minLength;i++){
      if(str1[i]!=str2[i]){
        count++;
      } else {
        if(count>newCount){
          newCount=count;
        }
        count=0;
      }
  }
  cout<<"The longest uncommon subsequence is "<<newCount<<endl;
  return 0;
}
