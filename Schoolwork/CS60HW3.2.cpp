#include<iostream>
using namespace std;

class Student{
public:
  // Inputs all values from the user(inclduing list of class anmes)
  void input();
  // Outputs name and list of all classes
  void output();
  // Resets num of classes to 0 and the classlist to an empty list
  void reset();
  // Overloading assignment that makes a new copy of the list of courses
  Student& operator =(const Student& rightSide);
  // A destructor that releases all memory that has been allocated
  ~Student();

private:
  string name;
  int numClasses;
  string *classList;
  int used;
};

void Student::input(){
  cout<<"Enter your name: "<<endl;
  cin>>name;
  cout<<"Enter the number of classes: "<<endl;
  cin>> numClasses;
  classList = new string[numClasses];
  cout<<"Enter the class names: "<<endl;
  for(int i=0; i<numClasses; i++){
    cin>>classList[i];
  }
}

void Student::output(){
  cout<<"Student Name: "<<name<<endl;
  cout<<"List of Classes: "<<endl;
  for(int i =0; i<numClasses; i++){
    cout<<classList[i]<<endl;
  }
}

void Student::reset(){
  classList=NULL;
  numClasses = 0;
  cout<<"RESETTING. Here are the number of classes: "<<numClasses<<endl;
  cout<<"RESETTING. Here is the list of classes: "<<classList<<endl;
}

Student& Student::operator =(const Student& rightSide){
  if(numClasses != rightSide.numClasses) {
    delete [] classList;
    classList = new string[rightSide.numClasses];
  }
  numClasses = rightSide.numClasses;
  used = rightSide.used;
  for(int i = 0; i < used; i++){
    classList[i]=rightSide.classList[i];
  }
  return *this;
}

Student::~Student(){
    delete [] classList;
}

int main(){
  Student a;
  a.input();
  a.output();
  a.reset();

  return 0;
}
