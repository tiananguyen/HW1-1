#include<iostream>
using namespace std;

int main() {
    int size,a[size];
    
    cout<<"How many number of values you want to enter: "<<endl;
    cin>>size;
    
    //sort
    for(int index=0; index< size; index++){
        cout<<"Enter the value"<<endl;
        cin>>a[index];
        for(int i=0; i<size;i++){
            for(int j=i+1; j<size;j++){
                if(a[i] < a[j]){
                    int temp;
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    }
    
    //count
    cout<<"N"<<"\t"<<"Count"<<endl;
    int count = 1, prev = a[0];
    for(int k=1;k<size;k++){
        int curr = a[k];
        if(curr == prev){
            count++;
        } else {
            cout<<prev<<"\t"<<count<<endl;
            prev=curr;
            count=1;
        } 
        if(k==size-1){
            cout<<prev<<"\t"<<count<<endl;
        }
            
    }
    
    return 0;
}