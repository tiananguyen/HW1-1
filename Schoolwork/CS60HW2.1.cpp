#include<iostream>
#include<vector>
using namespace std;

int main(){
  int count;

  //Ask for the amount of suitors
  cout<<"Enter the number of suitors: "<<endl;
  cin>>count;
  //Make vector according to count
  vector<int> theVector(count);

  //Fill in vector
  for(unsigned int i=0; i<theVector.size(); i++){
    theVector[i]=i+1;
    cout<<theVector[i]<<" ";
  }
  cout<<endl;

  //Eliminate the suitors
  for (int i = 2; theVector.size()>1; i =(i+2)%theVector.size()){
    theVector.erase(theVector.begin() + i );
    for(int j=0; j<theVector.size(); j++){
      cout<<theVector[j]<<" ";
      if(theVector.size()==1){
        cout<<endl;
        cout<<"The winner suitor is: "<<theVector[j]<<endl;
      }
    }
    cout<<endl;
  }

  return 0;
}
