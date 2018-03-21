#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
  int num;
  int next = 2;

  cout<<"How many numbers do you want to have?"<<endl;
  cin>>num;
  bool arr[num-2];
  vector<int> numbers;

  // create vector
  while(next<=num){
    numbers.push_back(next);
    next++;
  }

  // find prime values
  for(int i=2; i <= num; i++){ //2 3 4 5 6 7 8 9
    arr[i]=true;
    for(int j=2;j<=sqrt(num);j++){ //2 3
      if(arr[i]==true && i!=j){
        if(i%j==0){ // 3%2!=0  4%2= 0 8%2
          arr[i]=false; //4
          //numbers.erase(numbers.begin()+i);
          cout<<"f"<<" ";
        }
      }
    }
  }

  for(int i=0; i<=num-2; i++){
    cout<<arr[i]<<" ";
  }

  // print out vector with prime values
  vector<int>::iterator i;
  cout<<"Here are all the prime values: "<<endl;
  for(i = numbers.begin(); i!=numbers.end(); i++){
      cout<<*i<<" ";
    }
  cout<<endl;

  return 0;

}
