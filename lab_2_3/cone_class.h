#ifndef CONE_CLASS
#define CONE_CLASS
#include"interface_class.cpp"
#include<cmath>
class Cone: public ICalculatingFigureProperties{
	public:
		Cone(double, double);
		operator double() override;
		double calc_side_area() override;
		double calc_volume() override;
	private:
		int radius;
		int height;
};
#endif
