#include<iostream>
using namespace std;

class Point{
public:
  Point(double x, double y);
  void set(double setx, double sety);
  void move(double movex, double movey);
  void rotate();
  const double get_x(){
    return pointx;
  }
  const double get_y(){
    return pointy;
  }
private:
  double pointx, pointy;
};

Point::Point(double x, double y){
  pointx=x;
  pointy=y;
}
//Intialize the point
void Point::set(double setx, double sety){
  pointx = setx;
  pointy = sety;
}
//Move the point up or down
void Point::move(double movex,double movey){
  pointx+=movex;
  pointy+=movey;
}
//Rotate the point by 90 degrees clockwise around the origin
void Point::rotate(){
  pointy=pointx;
  pointx=pointy*(-1);
}

int main() {
  //Initialize the point
  Point a(5,10);
  //Test the functions
  a.set(2,7);
  a.move(2,1);
  a.rotate();

  cout<<"Here is the new coordinate: "<<endl;
  cout<<"( "<<a.get_x()<<" , "<<a.get_y()<<" )"<<endl;

  return 0;
}
