#include"point_class.h"
#include"line_class.h"
#include"rhombus_class.h"
#include<iostream>

int main(){
  Point point(2.0,4.0);
  std::cout << point.getX() << std::endl;
  std::cout << point.getY() << std::endl;

  Line line(2,4,4,7);
  std::cout << line.length() << std::endl;
  std::cout << point.getX() << std::endl;
  std::cout << point.getY() << std::endl;
  std::cout << line.getX2() << std::endl;
  std::cout << line.getY2() << std::endl;

  Rhombus rhombus(2,4,4,7,6,4,4,1);
  std::cout << rhombus.get_diagonal1() << std::endl;
  std::cout << rhombus.get_diagonal2() << std::endl;
  std::cout << rhombus.get_area() << std::endl;
  std::cout << rhombus.get_perimeter() << std::endl;
  
  return 0;
}
