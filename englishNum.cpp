//Convert two digit numbers into the English word for it
#include<iostream>
using namespace std;

main(){
    int num;
    cout<<"Please enter a two digit number: "<<endl;
    cin>>num;
    
    char digOne = '0'+(num/10);
    char digTwo = '0'+(num%10);
    
    if (digOne=='1'){
        switch(digTwo){
            case '0':
                cout<<"Ten";
                break;
            case '1':
                cout<<"Eleven";
                break;
            case '2':
                cout<<"Twelve";
                break;
            case '3':
                cout<<"Thirteen";
                break;
            case '4':
                cout<<"Fourteen";
                break;
            case '5':
                cout<<"Fifteen";
                break;
            case '6':
                cout<<"Sixteen";
                break;
            case '7':
                cout<<"Seventeen";
                break;
            case '8':
                cout<<"Eighteen";
                break;
            case '9':
                cout<<"Nineteen";
                break;
        }
    } else {
        switch(digOne) {
            case '2':
                cout<<"Twenty";
                break;
            case '3':
                cout<<"Thirty";
                break;
            case '4':
                cout<<"Fourty";
                break;
            case '5':
                cout<<"Fifty";
                break;
            case '6':
                cout<<"Sixty";
                break;
            case '7':
                cout<<"Seventy";
                break;
            case '8':
                cout<<"Eighty";
                break;
            case '9':
                cout<<"Ninety";
                break;
        } switch(digTwo) {
            case '1':
                cout<<"-one";
                break;
            case '2':
                cout<<"-two";
                break;
            case '3':
                cout<<"-three";
                break;
            case '4':
                cout<<"-four";
                break;
            case '5':
                cout<<"-five";
                break;
            case '6':
                cout<<"-six";
                break;
            case '7':
                cout<<"-seven";
                break;
            case '8':
                cout<<"-eight";
                break;
            case '9':
                cout<<"-nine";
                break;
        }
    }
    return 0;
}
    