#ifndef RHOMBUS_CLASS
#define RHOMBUS_CLASS
#include"line_class.h"
//Diagonals will be equal 0 if not wright coordiants given to constructor
class Rhombus:public Line{
  private:
  bool casual;
  double x3,y3,x4,y4;
  double diagonal1, diagonal2;
  double findout_diagonal(int);
  public:
  bool rhombus_check();
  Rhombus(double, double, double, double, double, double, double, double);
  double get_diagonal1();
  double get_diagonal2();
  double get_area();
  double get_perimeter();	
};
#endif
