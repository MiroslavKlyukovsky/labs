#include "parallelogram_class.h"

template <typename T> Parallelogram<T>::Parallelogram(Point<T> p1, Point<T> p2, Point<T> p3){
double p1p2 = sqrt(pow(p2.getX()-p1.getX(), 2.0)+pow(p2.getY()-p1.getY(), 2.0));
double p2p3 = sqrt(pow(p3.getX()-p2.getX(), 2.0)+pow(p3.getY()-p2.getY(), 2.0));
double p3p1 = sqrt(pow(p1.getX()-p3.getX(), 2.0)+pow(p1.getY()-p3.getY(), 2.0));
bool is_triangle = ( (p1p2 + p2p3) > p3p1 );
if(is_triangle){
	  vrtx1 = p1;
	  vrtx2 = p2;
	  vrtx3 = p3;
	  double distX = (p2.getX() - p1.getX());
	  double distY = (p2.getY() - p1.getY());
	  vrtx4.setX(p3.getX() - distX);
	  vrtx4.setY(p3.getY() - distY);
	  diagoncross.setX( (p1.getX() + distX/2)  +  ((vrtx3.getX() - vrtx2.getX())/2) );
	  diagoncross.setY( (p1.getY() + distY/2) );
	  SideLength1 = sqrt( pow(distX,2.0) + pow(distY,2.0) );// (*)>(*)
	  SideLength2 = p2p3;
	  DiagonalLength1 = sqrt( pow(p3.getX()-p1.getX(), 2.0)  +  pow(p3.getY()-p1.getY(), 2.0) );
	  DiagonalLength2 = sqrt( pow(vrtx4.getX()-p2.getX(), 2.0)  +  pow(vrtx4.getY()-p2.getY(), 2.0) );	
	  double A = vrtx4.getY() - p1.getY();
	  double B = -(vrtx4.getX() - vrtx1.getX());
	  double C = (-B)*p1.getY() - p1.getX()*(A);
	  double d = abs(A*p2.getX()+B*p2.getY()+C)/sqrt(pow(A, 2.0)+pow(B, 2.0));
	  AreaOfParallelogram = (d) * SideLength2;
	  Perimeter = 2*(SideLength1+SideLength2);
	}
};

template Parallelogram<int>::Parallelogram(Point<int> p1, Point<int> p2, Point<int> p3);
template Parallelogram<double>::Parallelogram(Point<double> p1, Point<double> p2, Point<double> p3);
template Parallelogram<float>::Parallelogram(Point<float> p1, Point<float> p2, Point<float> p3);

template <typename T> double Parallelogram<T>::get_sidelength1(){return SideLength1;};

template double Parallelogram<int>::get_sidelength1();
template double Parallelogram<double>::get_sidelength1();
template double Parallelogram<float>::get_sidelength1();

template <typename T> double Parallelogram<T>::get_sidelength2(){return SideLength2;};

template double Parallelogram<int>::get_sidelength2();
template double Parallelogram<double>::get_sidelength2();
template double Parallelogram<float>::get_sidelength2();

template <typename T> double Parallelogram<T>::get_diagonallength1(){return DiagonalLength1;};

template double Parallelogram<int>::get_diagonallength1();
template double Parallelogram<double>::get_diagonallength1();
template double Parallelogram<float>::get_diagonallength1();

template <typename T> double Parallelogram<T>::get_diagonallength2(){return DiagonalLength2;};

template double Parallelogram<int>::get_diagonallength2();
template double Parallelogram<double>::get_diagonallength2();
template double Parallelogram<float>::get_diagonallength2();

template <typename T> double Parallelogram<T>::get_area(){return AreaOfParallelogram;};

template double Parallelogram<int>::get_area();
template double Parallelogram<double>::get_area();
template double Parallelogram<float>::get_area();

template <typename T> double Parallelogram<T>::get_perimeter(){return Perimeter;};

template double Parallelogram<int>::get_perimeter();
template double Parallelogram<double>::get_perimeter();
template double Parallelogram<float>::get_perimeter();
