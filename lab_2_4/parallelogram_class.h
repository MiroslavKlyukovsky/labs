#ifndef PARALLELOGRAM_CLASS
#define PARALLELOGRAM_CLASS
#include "point_class.h"
#include <cmath>

//Suppoused you enter points like this:
//
//          P2 *                P3 *
//
//
//        Diagcross *  
//
//
//  P1 *                P4 *


template <typename T> class Parallelogram{
	public:
		Parallelogram(Point<T>, Point<T>, Point<T>);
		double get_sidelength1();
		double get_sidelength2();
		double get_diagonallength1();
		double get_diagonallength2();
		double get_area();
		double get_perimeter();
	private:
		Point<T> vrtx1, vrtx2, vrtx3, vrtx4, diagoncross;
		double SideLength1, SideLength2;
		double DiagonalLength1, DiagonalLength2; 
		double AreaOfParallelogram;
		double Perimeter;
};

#endif
