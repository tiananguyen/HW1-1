#ifndef NPOINT_H
#define NPOINT_H
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

template<class T>
class Npoint{
public:
  Npoint();
  Npoint(int dimPoint);
  Npoint(int dimPoint, T a[]);
  T getItem(int pos) const;
  T getSize() const;
  void operator =(const Npoint& point);
private:
  T a[10];
  int dimPoint;
};

// Overloading non-member functions
const Npoint operator +(const Npoint& point1, const Npoint point2);
bool operator ==(const Npoint& point1, const Npoint& point2);

template<class T>
Npoint<T>::Npoint(){
  dimPoint = 0;
  a[10] = NULL;
}
template<class T>
Npoint<T>::Npoint(int dim){
  dimPoint = dim;
  if(dimPoint <= 10){
    cout<<"Please enter "<<dimPoint<<" values"<<endl;
    for(int i=0; i<dimPoint; i++){
      cin>>a[i];
    }
  }
  else{
    cout<<"Invalid dimension."<<endl;
    exit(1);
  }
}

template<class T>
Npoint<T>::Npoint(int dim, T b[]){
  dimPoint = dim;
  for(int i=0; i<dimPoint; i++){
    a[i] = b[i];
  }
}

template<class T>
T Npoint<T>::getItem(int pos) const {
  return a[pos];
}

template<class T>
T Npoint<T>::getSize() const{
  return dimPoint;
}

template<class T>
void Npoint<T>::operator =(const Npoint& point){
  dimPoint = point.dimPoint;
  for(int i=0; i<dimPoint; i++){
    a[i] = point.a[i];
  }
}

bool operator ==(const Npoint& point1, const Npoint& point2){
  if(point1.getSize()!=point2.getSize()){
    return false;
  } else {
    for(int i=0; i<point1.getSize(); i++){
      if(point1.getItem(i)==point2.getItem(i)){
        return true;
      } else {
        return false;
        break;
      }
    }
  }
}

template<class T>
const Npoint operator +(const Npoint& point1, const Npoint point2){
  T arr[10];
  if(point1.getSize()==point2.getSize()){
    for(int i =0;i<point1.getSize();i++){
      arr[i] = point1.getItem(i) + point2.getItem(i);
    }
  }
  return Npoint(point1.getSize(), arr);
}



#endif
