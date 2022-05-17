#include "cone_class.h"

Cone::Cone(double height, double radius){
set_baseperimeter(2 * radius * M_PI);
this->height = height;
this->radius = radius;
};

Cone::operator double(){
return get_baseperimeter();
};

double Cone::calc_side_area(){
return (sqrt(pow(height,2.0)+pow(radius,2.0)) * M_PI * radius);
};

double Cone::calc_volume(){
return ((get_baseperimeter()/2) * radius * height)/3;
};
