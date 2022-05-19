#include "point_class.h"
#include "parallelogram_class.h"
#include <iostream>
int main(){
	Point<int> point(2,3);
	std::cout<< point.getX() << '\n';
	std::cout<< point.getY() << '\n';
	point.setX(10);
	point.setY(20);
	std::cout<< point.getX() << '\n';
	std::cout<< point.getY() << '\n';

	Point<float> point1;
	point1.setX(10.5);
	point1.setY(20.1);
	std::cout<< point1.getX() << '\n';
	std::cout<< point1.getY() << '\n';


	Point<int> point2(0,0);
	Point<int> point3(3,4);
	Point<int> point4(8,4);

	Parallelogram<int> parallelogram(point2, point3, point4);
	
	std::cout << parallelogram.get_sidelength1() << '\n';
	std::cout << parallelogram.get_sidelength2() << '\n';
	std::cout << parallelogram.get_diagonallength1() << '\n';
	std::cout << parallelogram.get_diagonallength2() << '\n';
	std::cout << parallelogram.get_area() << '\n';
	std::cout << parallelogram.get_perimeter() << '\n';

	Point<double> point5(0,0);
	Point<double> point6(3.0,4.0);
	Point<double> point7(8.0,4.0);

	Parallelogram<double> parallelogram1(point5, point6, point7);
	
	std::cout << parallelogram1.get_sidelength1() << '\n';
	std::cout << parallelogram1.get_sidelength2() << '\n';
	std::cout << parallelogram1.get_diagonallength1() << '\n';
	std::cout << parallelogram1.get_diagonallength2() << '\n';
	std::cout << parallelogram1.get_area() << '\n';
	std::cout << parallelogram1.get_perimeter() << '\n';
	return 0;
}
