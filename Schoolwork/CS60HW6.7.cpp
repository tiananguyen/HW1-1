#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<ctime>
using namespace std;

int main(){
  // Making the Board with Random Generated Letters
  cout<<"Here is the board: "<<endl;
  char arr[4][4];
  srand(time(NULL));
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      char a = rand() % 26 + 'a';
      arr[i][j] = a;
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  // Opening File
  ifstream fin;
  fin.open("words.txt");
  if (fin.fail()) {
      cout << "Input file opening failed." << endl;
      exit(1);
  }

  // Checking for the characters on the line
  cout<<"Here are the words: "<<endl;
  vector<char> arr2;
  char next;
  while(fin>>next){
    arr2.push_back(next);
  }

  // Search for word
  for(int i=0; i<4; i++){
    if(arr2[i]==arr[i]){
      if(arr2[i+1]==arr[i+1]){
        cout<<arr[i]<<endl;
      } else {
        for(int j=0; j<4; j++){
          arr2[j]==arr[j];
          if(arr2[j+1]==arr[j+1]){
            cout<<arr2[j]<<endl;
          }
        }
      }
    }
  }

  // Close file
  fin.close();

  return 0;

}
