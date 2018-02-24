#ifndef CS60HW53_H
#define CS60HW53_H
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

template<class T>
class Items{
public:
  //Default Constuctor
  Items();
  //Constructor
  Items(int newSize,T b[]);
  // Add a new item to the set
  void addNewItem(T item);
  // Get the number of items in the set
  int getNumItem() const;
  // Get a pointer to a dynamically created array containing each item in the set
  int getPointer() const;
  // Overloading Operator
  T& operator[](int index);
  // A destructor that releases all memory that has been allocated
  ~Items();
private:
  int size;
  int used;
  T *itemList;
};

template<class T>
Items<T>::Items(){
  size = 10;
  used = 0;
  itemList = new T[size];
}

template<class T>
Items<T>::Items(int newSize,T b[]){
  size = newSize;
  used = 0;
  itemList = new T[size];
  for(int i=0; i<size; i++){
    itemList[i] = b[i];
    used++;
  }
}

// Add new item to dynamic array
template<class T>
void Items<T>::addNewItem(T item){
  if(used >= size){
    cout<<"Cannot add new item"<<endl;
    exit(1);
  }
  itemList[used] = item;
  used++;
}

// Get number of Items
template<class T>
int Items<T>::getNumItem() const{
  return size;
}

// Get pointer for items used
template<class T>
int Items<T>::getPointer() const{
  return used;
}

// Operator Overload
template<class T>
T& Items<T>::operator[](int index){
  if(index>=used){
    cout<<"Illegal index"<<endl;
    exit(0);
  }
  return itemList[index];
}

// Deallocate
template<class T>
Items<T>::~Items(){
  delete [] itemList;
}

#endif
