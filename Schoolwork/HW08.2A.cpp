#include<iostream>
using namespace std;

struct Fraction{
    int numerator;
    int denominator;
};

void printFraction(Fraction f);

int main() {
    Fraction f;

    printFraction(f);

    return 0;
}

void printFraction(Fraction f){
    cout<<"Enter the numerator: "<<endl;
    cin>>f.numerator;
    cout<<"Enter the denominator: "<<endl;
    cin>>f.denominator;
    cout<<f.numerator<<"/"<<f.denominator<<endl;
}