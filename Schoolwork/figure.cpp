#include <iostream>
using namespace std;

class Figure {
public:
  // Erase Not Virtual
  void erase();
  // Draw Not Virtual
  void draw();
  // Center Not Virtual
  void center();
  // Erase Virtual
  virtual void eraseV() const;
  // Draw Virtual
  virtual void drawV() const;
  // Center Virtual
  virtual void centerV() const;
};
class Triangle : public Figure {
public:
  // Erase Not Virtual
  void erase();
  // Draw Not Virtual
  void draw();
  // Center Not Virtual
  void center();
  // Erase Virtual
  virtual void eraseV() const;
  // Draw Virtual
  virtual void drawV() const;
  // Center Virtual
  virtual void centerV() const;
};
class Rectangle : public Figure {
public:
  // Erase Not Virtual
  void erase();
  // Draw Not Virtual
  void draw();
  // Center Not Virtual
  void center();
  // Erase Virtual
  virtual void eraseV() const;
  // Draw Virtual
  virtual void drawV() const;
  // Center Virtual
  virtual void centerV() const;
};

// Figure
void Figure::eraseV() const{
  cout<<"eraseV() is called"<<endl;
}
void Figure::drawV() const{
  cout<<"drawV() is called"<<endl;
}
void Figure::centerV() const{
  cout<<"centerV() is called"<<endl;
  drawV();
  eraseV();
}
void Figure::erase() {
  cout<<"erase() is called"<<endl;
}
void Figure::draw() {
  cout<<"draw() is called"<<endl;
}
void Figure::center() {
  cout<<"center() is called"<<endl;
  draw();
  erase();
}

// Triangle
void Triangle::erase() {
  cout<<"erase() is called"<<endl;
}
void Triangle::draw() {
  cout<<"draw() is called"<<endl;
}
void Triangle::center() {
  cout<<"center() is called"<<endl;
  draw();
  erase();
}
void Triangle::eraseV() const{
  cout<<"eraseV() is called"<<endl;
}
void Triangle::drawV() const{
  cout<<"drawV() is called"<<endl;
}
void Triangle::centerV() const{
  cout<<"centerV() is called"<<endl;
  drawV();
  eraseV();
}
// Rectangle
void Rectangle::erase() {
  cout<<"erase() is called"<<endl;
}
void Rectangle::draw() {
  cout<<"draw() is called"<<endl;
}
void Rectangle::center() {
  cout<<"center() is called"<<endl;
  draw();
  erase();
}
void Rectangle::eraseV() const{
  cout<<"eraseV() is called"<<endl;
}
void Rectangle::drawV() const{
  cout<<"drawV() is called"<<endl;
}
void Rectangle::centerV() const{
  cout<<"centerV() is called"<<endl;
  drawV();
  eraseV();
}

// Main
int main(){
  Figure fig;
  fig.draw();
  cout<<"Derived class Figure object calling center()."<<endl;
  fig.center();

  Triangle tri;
  tri.draw();
  cout<<"Derived class Triangle object calling center()."<<endl;
  tri.center();

  Rectangle rect;
  rect.draw();
  cout<<"Derived class Rectangle object calling center()"<<endl;
  rect.center();

  return 0;
}
