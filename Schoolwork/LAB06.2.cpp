/* the array fact should be a parallel array to a where each spot holds true if the
corresponding element of a is a fact, and false if it’s not. */

#include <iostream>
using namespace std;
bool isfact(int n){
    bool is = false;
    int fact = 1;
    for(int i = 1; i<n+2; i++){
        if(fact==n)
            is = true;
        fact = fact*i;
    }
    return is;
}
void factarr(int a[], bool fact[], int size){
    for(int i =  0; i<size; i++){
        fact[i] = isfact(a[i]);
    }
}
int main(){
    int size = 5;
    int a[size];
    bool fact[size];
    cout << "Enter 5 values to fill the array" << endl;
    for(int i = 0; i<size; i++){
        cin >> a[i];
    }
    factarr(a, fact, size);
    for(int i = 0; i<size; i++){
        cout << a[i] << " " << fact[i] << endl;
    }
    return 0;
}
