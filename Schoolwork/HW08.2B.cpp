#include<iostream>
using namespace std;

struct Fraction{
    int numerator;
    int denominator;
};

void fractionMult(Fraction f1, Fraction f2);

int main() {
    Fraction f1, f2;

    fractionMult(f1, f2);

    return 0;
}

void fractionMult(Fraction f1, Fraction f2){
    Fraction f3;
    cout<<"Enter the numerator 1: "<<endl;
    cin>>f1.numerator;
    cout<<"Enter the denominator 1: "<<endl;
    cin>>f1.denominator;
    cout<<"Enter the numerator 2: "<<endl;
    cin>>f2.numerator;
    cout<<"Enter the denominator 2: "<<endl;
    cin>>f2.denominator;
    f3.denominator = f1.denominator * f2.denominator;
    f3.numerator = f1.numerator * f2.numerator;
    cout<<f3.numerator<<"/"<<f3.denominator<<endl;
}