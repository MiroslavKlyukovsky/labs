#ifndef LINE_CLASS
#define LINE_CLASS
#include"point_class.h"
#include<cmath>
class Line: public Point{
  double x2, y2;
  double Length;
public:
  Line(double x,double y,double x2,double y2);
  double inside_length(double, double, double, double);
  double length();
  double getX2();
  double getY2();
};
#endif
