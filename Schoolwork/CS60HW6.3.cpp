// Tower of Ha Noi Recursion
#include<iostream>
using namespace std;

void moveDisk(int count, int r1, int r3, int r2){
  if(count>0){
    moveDisk(count-1, r1, r2, r3);
    cout<<"Move disk "<<count<<" from "<<r1<<" to "<<r3<<endl;
    moveDisk(count-1, r2, r3, r1);
  }
}

int main(){
  int num;
  string answer;
  cout<<"Welcome to the Tower of Ha Noi Game. Ready to play?(Y/N)"<<endl;
  cin>>answer;
  if(answer=="Y"||answer=="y"){
    cout<<"How many disks do you want to move?"<<endl;
    cin>>num;
    moveDisk(num, 1, 2, 3);
  }

  return 0;
}
