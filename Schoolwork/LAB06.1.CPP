//Find the minimum element in the array
#include <iostream>
using namespace std;
int minValue(int a[], int size){

    int min = a[0];
    for(int i = 0; i<size; i++){
        if(a[i]<min)
            min = a[i];
    }
    return min;
}
int main (){
    cout << "Enter 10 values to fill the array" << endl;
    int a[10];
    int size = 10;
    for(int i = 0; i<size; i++){
        cin >> a[i];
    }
    int minimum = minValue(a, size);
    cout << "the minimum value is: " << minimum << endl;
    return 0;
}
