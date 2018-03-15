#include "dbiguint.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <cassert>


dbiguint::dbiguint(const std::string & s) {
    capacity_ = s.length();
    data_ = new unsigned short[capacity_];
    int place = 0;
    char a;
    for(int i = capacity_-1;i >= 0; i--){
        a = s[i];
        data_[place]=a-'0';
        place++;
    }

}
dbiguint::dbiguint() {
    capacity_ = 1;
    data_ = new unsigned short[capacity_];
    data_[0] = 0;
}

std::size_t dbiguint::size() const{
    return capacity_;
}
unsigned short dbiguint::operator [](std::size_t pos) const{
    assert(pos <= capacity_);
    return data_[pos];
}
std::ostream& operator <<(std::ostream& outstream, const dbiguint& a){
    for(int i = a.size()-1; i >= 0; i--){
        outstream << a[i] << " ";
    }
    return outstream;
}
void dbiguint::reserve(std::size_t newcapacity_){
    if(newcapacity_ > capacity_){
        unsigned short *data2_ = new unsigned short[newcapacity_];
        for(int i = 0; i < capacity_; i++){
            data2_[i] = data_[i];
        }
        for(int i = capacity_; i < newcapacity_; i++) {
            data2_[i] = 0;
        }
        delete [] data_;
        data_ = data2_;
        capacity_ = newcapacity_;
    }
}
void dbiguint::operator +=(const dbiguint & b){
    if(capacity_ < b.size()){
        reserve(b.size());
    }
    int carry=0;
    for(int i = capacity_; i >=0; i--) {
      data_[i] = (data_[i] + b[i] + carry)%10;
      if((data_[i] + b[i] + carry) > 9){
          carry = 1;
      } else {
          carry = 0;
      }
    }
}
/*

dbiguint operator + (const dbiguint &, const dbiguint &);
dbiguint operator - (const dbiguint &, const dbiguint &);

bool operator < (const dbiguint & x, const dbiguint & y){
    int a = x.compare(y);
    if(a==-1){
        return true;
    } else {
        return false;
    }
}

bool operator <= (const dbiguint & x, const dbiguint & y){
    int a = x.compare(y);
    if(a==-1||a==0){
        return true;
    } else {
        return false;
    }
}

bool operator != (const dbiguint & x, const dbiguint & y){
    int a = x.compare(y);
    if(a!=0){
        return true;
    } else {
        return false;
    }
}

bool operator == (const dbiguint & x, const dbiguint & y){
    int a = x.compare(y);
    if(a==0){
        return true;
    } else {
        return false;
    }
}

bool operator >= (const dbiguint & x, const dbiguint & y){
    int a = x.compare(y);
    if(a==1||a==0){
        return true;
    } else {
        return false;
    }
}

bool operator > (const dbiguint & x, const dbiguint & y){
    int a = x.compare(y);
    if(a==1){
        return true;
    } else {
        return false;
    }
}
*/
