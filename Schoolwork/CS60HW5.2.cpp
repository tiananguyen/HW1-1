/* Write a template version of the recursive binary search algorithm
 * which only searches an array of integers for an integer key.
 */
#include<iostream>
#include<string>
using namespace std;
const int ARRAY_SIZE = 10;

template<class T>
void search(const T a[], int first, int last, T key, bool& found,
int& location);

int main() {
  // char a[ARRAY_SIZE] = {'a','b','c','d','e','f','g','h','i','j'};
  // char key = 'b';
  int a[ARRAY_SIZE] = {1,2,3,4,5,6,7,8,10,11};
  int key = 8;
  const int finalIndex = ARRAY_SIZE - 1;
  int location;
  bool found;
  search(a, 0, finalIndex, key, found, location);

  if(found){
    cout<<key<<" is in index location "<<location<<endl;
  } else {
    cout<<key<<" is not in the array."<<endl;
  }
  return 0;
}

/* In the following code
 * T has to have ==, <, >
 */
template<class T>
void search(const T a[], int first, int last, T key, bool& found,
int& location){
  int mid;
  if(first > last){
    found = false;
  } else {
    mid = (first+last)/2;
    if(key==a[mid]){
      found = true;
      location = mid;
    } else if(key < a[mid]){
      search(a, first, mid-1, key, found, location);
    } else if(key>a[mid]){
      search(a, mid+1, last, key, found, location);
    }
  }
}
