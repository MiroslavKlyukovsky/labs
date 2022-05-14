#include"line_class.h"

Line::Line(double x, double y, double x2, double y2):Point(x,y){
  Length = 0;
  this->x2 = x2;
  this->y2 = y2;
  Length = length();
};

double Line::inside_length(double x, double y, double x1, double y1){
  return sqrt(pow(x-x1, 2.0) + pow(y-y1, 2.0));
};

double Line::length(){
return inside_length(getX(),getY(),x2,y2);
};

double Line::getX2(){
return x2;
};

double Line::getY2(){
return y2;
};
