#include<iostream>
using namespace std;

class Rational{
public:
    Rational(int num, int den);

    Rational();
    int get_num() {
        return numerator;
    }
    int get_den() {
        return denominator;
    }
    void operator +=(Rational rhs);
private:
    int numerator;
    int denominator;
};

void Rational::operator +=(Rational rhs){
    numerator = numerator*rhs.get_den()+denominator*rhs.get_num();
    denominator = denominator*rhs.get_den();
}

Rational::Rational(int num, int den){
    numerator = num;
    denominator = den;
}

Rational operator *(Rational lhs, Rational rhs){
    Rational z(lhs.get_num()*rhs.get_num(), lhs.get_den()*rhs.get_den());
    return z;
}
Rational operator +(Rational lhs, Rational rhs){
    int deno = lhs.get_den()*rhs.get_den();
    Rational z(lhs.get_num()*rhs.get_den()+lhs.get_den()*rhs.get_num(), deno);
    return z;
}
bool operator ==(Rational lhs, Rational rhs){
    return lhs.get_num()*rhs.get_den()==rhs.get_num()*lhs.get_den();
}

int main() {
    Rational a(5, 7);
    Rational b(4, 2);
    cout << a.get_num() << "/" << a.get_den() <<endl;
    cout << b.get_num() << "/" << b.get_den() <<endl;
    Rational c = a * b;
    Rational d = a + b;
    cout << c.get_num() << "/" << c.get_den() <<endl;
    cout << d.get_num() << "/" << d.get_den() <<endl;
    Rational e(12, 36);
    Rational f(1, 3);
    if(e == f){
        cout << "true" <<endl;
    } else {
        cout << "false" <<endl;
    }
    a += b;
    cout << a.get_num() << "/" << a.get_den() <<endl;
    if(a == d){
        cout << "true" <<endl;
    } else {
        cout << "false" <<endl;
    }
    return 0;
}
