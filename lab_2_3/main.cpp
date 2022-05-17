#include"cylinder_class.h"
#include"cone_class.h"
#include"interface_class.cpp"
#include<iostream>
int main(){
	ICalculatingFigureProperties* ICFP;
	
	Cylinder cylinder(10,3);
	ICFP = &cylinder;
	std::cout << *ICFP << '\n';
	std::cout << ICFP->calc_side_area()  << '\n';
	std::cout << ICFP->calc_volume()  << '\n';
	
	Cone cone(10,3);
        ICFP = &cone;
	std::cout << *ICFP << '\n';
	std::cout << ICFP->calc_side_area()  << '\n';
	std::cout << ICFP->calc_volume()  << '\n';
	
	return 0;
};
