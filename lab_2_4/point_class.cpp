#include "point_class.h"

template <typename T> Point<T>::Point(){
	x = T(0);
	y = T(0);
};

template <typename T> Point<T>::Point(T x, T y){
	this->x = x;
	this->y = y;
};

template <typename T> T Point<T>::getX(){
	return x;
};

template <typename T> T Point<T>::getY(){
	return y;
};

template <typename T> void Point<T>::setX(T x){
	this->x = x;
};

template <typename T> void Point<T>::setY(T y){
	this->y = y;
};

template Point<int>::Point();
template Point<double>::Point();
template Point<float>::Point();

template Point<int>::Point(int x, int y);
template Point<double>::Point(double x, double y);
template Point<float>::Point(float x, float y);

template int Point<int>::getX();
template double Point<double>::getX();
template float Point<float>::getX();

template int Point<int>::getY();
template double Point<double>::getY();
template float Point<float>::getY();

template void Point<int>::setX(int x);
template void Point<double>::setX(double x);
template void Point<float>::setX(float x);

template void Point<int>::setY(int y);
template void Point<double>::setY(double y);
template void Point<float>::setY(float y);
