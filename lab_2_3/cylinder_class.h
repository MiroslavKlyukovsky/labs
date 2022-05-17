#ifndef CYLINDER_CLASS
#define CYLINDER_CLASS
#include"interface_class.cpp"
#include<cmath>
class Cylinder: public ICalculatingFigureProperties{
	public:
	Cylinder(double, double);	
	operator double() override;
	double calc_side_area() override;
	double calc_volume() override;
	private:
	double height;
	double radius;
};
#endif
