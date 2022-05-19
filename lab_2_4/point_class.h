#ifndef POINT_CLASS
#define POINT_CLASS
template <typename T> class Point{
	public:
		Point();
		Point(T x, T y);
		T getX();
		T getY();
		void setX(T);
		void setY(T);
	private:
		T x;
		T y;
};
#endif
