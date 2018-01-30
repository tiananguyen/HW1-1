#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>

// WANT: integers with CAPACITY digits, only non-negative
//
// support:
//    2 constructors: int, string
//    member functions:  [] returns individual digits given position
//                        +=
//                        -=
//                        compare: return +1, 0, -1, depending on
//                        whether this biguint >, ==, < than given biguint
//                        +, - (binary), - (unary), <, <=, ==, !=, >=, >
//                        <<, >>


class biguint
{
public:
    // CONSTANTS & TYPES

    static const std::size_t CAPACITY = 20;

    // CONSTRUCTORS

    // pre: none
    // post: creates a biguint with value 0
    biguint(){
        for(int i=0;i<CAPACITY;i++){
            data_[i]=0;
        }
    }

    // pre: s contains only decimal digits
    // post: creates a biguint whose value corresponds to given string of digits
    biguint(const std::string & str){
        int length = str.length()-1;
        int place=0;
        char a;
        for(int i=length;i>=0;i--){
            a = str[i];
            data_[place] = a-'0';
            place++;
        }
        for(int i=place;i<CAPACITY;i++){
            data_[i]=0;
        }
    }

    // CONSTANT MEMBER FUNCTIONS

    // pre: pos < CAPACITY
    // post: returns the digit at position pos
    //          0 is the least significant (units) position

    unsigned short operator[] (std::size_t pos) const{
        if(pos<CAPACITY){
            return data_[pos];
        }
    }


    // pre: none
    // post: returns 1 if this biguint > b
    //               0 if this biguint == b
    //              -1 if this biguint < b
    int compare(const biguint & b) const{
        for(int i=CAPACITY-1;i>=0;i--){
            if(data_[i]<b[i]){
                return -1;
            }
            if(data_[i]>b[i]){
                return 1;
            }
        }
        return 0;
    }



    // MODIFICATION MEMBER FUNCTIONS


    // pre: none
    // post: b is added to this biguint; ignore last carry bit if any
    void operator += (const biguint & b){
        int carryOver=0;
        for(int i=0; i<CAPACITY;i++){
            if(data_[i]+b[i]+carryOver > 9){
                data_[i] = (data_[i]+b[i]+carryOver)%10;
                carryOver = 1;
            } else {
            data_[i] = data_[i] + b[i]+carryOver;
            carryOver=0;
            }
        }
    }


    void operator -= (const biguint & b);

private:

    unsigned short data_[CAPACITY];

    // INVARIANTS:
    //    data_[i] holds the i^th digit of this biguint or 0 if not used
    //    data_[0] holds the least significant (units) digit
};


// nonmember functions
biguint operator + (const biguint & x, const biguint & y){
    std::string newInt = "";
    int carryOver=0;
    for(int i=0; i<biguint::CAPACITY;i++){
        if((x[i]+y[i]+carryOver)>9){
            // Constructs a new string in 's' then appends to 'newInt'
            std::ostringstream s;
            s << ((x[i]+y[i]+carryOver)%10);
            newInt.append(s.str());
            carryOver=1;
        } else {
            std::ostringstream s;
            s << (x[i]+y[i]+carryOver);
            newInt.append(s.str());
            carryOver=0;
        }
    }
    biguint z(newInt);
    return z;
}

biguint operator - (const biguint &, const biguint &);

bool operator < (const biguint & x, const biguint & y){
    int a = x.compare(y);
    if(a==-1){
        return true;
    } else {
        return false;
    }
}

bool operator <= (const biguint & x, const biguint & y){
    int a = x.compare(y);
    if(a==-1||a==0){
        return true;
    } else {
        return false;
    }
}

bool operator != (const biguint & x, const biguint & y){
    int a = x.compare(y);
    if(a!=0){
        return true;
    } else {
        return false;
    }
}

bool operator == (const biguint & x, const biguint & y){
    int a = x.compare(y);
    if(a==0){
        return true;
    } else {
        return false;
    }
}

bool operator >= (const biguint & x, const biguint & y){
    int a = x.compare(y);
    if(a==1||a==0){
        return true;
    } else {
        return false;
    }
}

bool operator > (const biguint & x, const biguint & y){
    int a = x.compare(y);
    if(a==1){
        return true;
    } else {
        return false;
    }
}

std::ostream& operator << (std::ostream& outstream, const biguint& a){
    for(int i=biguint::CAPACITY-1;i>=0;i--){
        outstream<<a[i];
    }
    return outstream;
}


int main(){
    biguint a("92");
    std::cout<<a<<std::endl;

    biguint b("22");
    std::cout<<b<<std::endl;
    int c=b[0];
    std::cout<<c<<std::endl;

    biguint d = a + b;
    std::cout<<d<<std::endl;
    a+=b;
    std::cout<<a<<std::endl;

    /*
    std::cout<<b<<std::endl;
    std::cout<<3<<std::endl
            <<(b>a)<<std::endl
            <<(b>=a)<<std::endl
            <<(b!=a)<<std::endl
            <<(b==a)<<std::endl
            <<(b<=a)<<std::endl
            <<(b<a)<<std::endl;
    */

    return 0;
}
