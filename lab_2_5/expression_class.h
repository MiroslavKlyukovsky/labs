#ifndef EXPRESSION_CLASS
#define EXPRESSION_CLASS
#include <cmath>
class Expression{
	public:
		Expression();
		Expression(double, double, double, double);
		double get_parameter(char);
		void set_parameter(char, double);
		double calculate();
	private:
		double A, B, C, D;
};
#endif

