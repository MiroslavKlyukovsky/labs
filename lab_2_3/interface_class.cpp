#ifndef INTERFACE_CLASS
#define INTERFACE_CLASS
class ICalculatingFigureProperties{
	public:
	void set_baseperimeter(double baseperimeter){
		this->baseperimeter = baseperimeter;
	}
	double get_baseperimeter(){
		return baseperimeter;
	}
	virtual operator double() = 0;
	virtual double calc_side_area() = 0;
	virtual double calc_volume() = 0;
	private:
	double baseperimeter;
};
#endif
