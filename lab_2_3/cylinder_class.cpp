#include"cylinder_class.h"

Cylinder::Cylinder(double height, double radius){
set_baseperimeter(2 * radius * M_PI);
this->height = height;
this->radius = radius;
};

Cylinder::operator double(){
return get_baseperimeter();
};

double Cylinder::calc_side_area(){
return height*get_baseperimeter();
};

double Cylinder::calc_volume(){
return (get_baseperimeter()/2)*radius * height;
};
