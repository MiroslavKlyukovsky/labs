#ifndef class2
#define class2
#include<cmath>
class Segment{
  double dot1X = 0, dot1Y = 0;
  double dot2X = 0, dot2Y = 0;
  public:
  bool set(int dot_num, char dot_x_or_y, double dot_val);
  double length();
  double oy_angle();
  int get(int dot_num, char dot_x_or_y);
};
#endif
