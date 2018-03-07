#include<iostream>
using namespace std;

bool isSorted(int a[], int n){
  if(n==2){
    return (a[0]<=a[1]);
  }
  else {
    if(a[n-1]>=a[n-2]){
      return (isSorted(a, n-1));
    } else {
      return false;
    }
  }
}

int main(){
  int arr[5] = {1,2,3,4,5};
  int arr2[5] = {1,3,2,4,5};
  if(isSorted(arr,5)==true){
    cout<<"The array is sorted"<<endl;
  }
  if(isSorted(arr2,5)==false){
    cout<<"The array is not sorted"<<endl;
  }

  return 0;
}
