#ifndef CS60HW54_H
#define CS60HW54_H
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

template<class T>
class DynamicStringArray{
public:
  // Default Constructor
  DynamicStringArray();
  // Constructor
  DynamicStringArray(int newSize, T array[]);
  // Return size
  int getSize() const;
  // Add an entry
  void addEntry(T entry);
  // Delete an entry
  bool deleteEntry(T entry, T array[]);
  // Return entry
  T getEntry(int entry);
  // Return number of elements used
  int getUsed() const;
  // Copy Constructor
  DynamicStringArray(const DynamicStringArray& object);
  // Overload assignment Operator
  T& operator =(const DynamicStringArray& rightSide);
  // Destructor
  ~DynamicStringArray();
private:
  T *dynamicArray;
  int size;
  int used;
};

// Default Constructor
template<class T>
DynamicStringArray<T>::DynamicStringArray(){
  size = 10;
  used = 0;
  dynamicArray = new T[size];
}

// Constructor
template<class T>
DynamicStringArray<T>::DynamicStringArray(int newSize, T array[]){
  size = newSize;
  used = newSize-1;
  dynamicArray = new T[size];
  for(int i=0; i<size; i++){
    dynamicArray[i] = array[i];
  }
}

// Add an entry
template<class T>
void DynamicStringArray<T>::addEntry(T entry){
  dynamicArray[used] = entry;
  used++;
  size++;
}

// Return size
template<class T>
int DynamicStringArray<T>::getSize() const {
  return size;
}

// Delete an entry
template<class T>
bool DynamicStringArray<T>::deleteEntry(T entry,T array[] ){
  bool found = false;
  for(int i=0; i<used; i++){
    if(dynamicArray[i]==entry){
      found = true;
    } else {
      dynamicArray = new T[size];
      for(int i=0; i<size; i++){
        dynamicArray[i] = array[i];
        used++;
      }
    }
  }
  if(found == true){
    return true;
  } else {
    return false;
  }
}

// Return entry
template<class T>
T DynamicStringArray<T>::getEntry(int entry){
  return dynamicArray[entry];
}

// Return number of elements used
template<class T>
int DynamicStringArray<T>::getUsed() const{
  return used;
}

// Copy Constructor
template<class T>
DynamicStringArray<T>::DynamicStringArray(const DynamicStringArray& object){
  dynamicArray = new T[size];
  for (int i=0; i<used;i++){
    dynamicArray[i] = object.dynamicArray[i];
  }
}

// Overload assignment Operator
template<class T>
T& DynamicStringArray<T>::operator =(const DynamicStringArray& rightSide){
  if(size != rightSide.getSize()){
    delete [] dynamicArray;
    dynamicArray = new T[rightSide.getSize()];
  }
  size = rightSide.getSize();
  used = rightSide.getUsed();
  for(int i=0; i<used; i++){
    dynamicArray[i] = rightSide.dynamicArray[i];
  }
  return *this;
}

// Destructor
template<class T>
DynamicStringArray<T>::~DynamicStringArray(){
  delete [] dynamicArray;
}

#endif
