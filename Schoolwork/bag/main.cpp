#include <iostream>
#include "bag.h"

using namespace std;

int main(){
    Bag b;
    b.insert(8);
    b.insert(10);
    b.insert(9);
    for(std::size_t i=0; i<b.size(); i++){
     cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<b.size()<<endl;
}
