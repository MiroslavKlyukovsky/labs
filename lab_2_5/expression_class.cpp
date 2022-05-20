#include "expression_class.h"

Expression::Expression(){
A = 0;B = 0;C = 0;D = 0;
};

Expression::Expression(double A, double B, double C, double D){
if(D > 41){
	this->A = 0;this->B = 0;this->C = 0;this->D = 0;
	throw "D can`t be more than 41. All param. are 0";}
if(D == 41 and A == 0 and B == 0 and C == 0){
	this->A = 0;this->B = 0;this->C = 0;this->D = 0;
	throw "Denominator can`t be 0. All param. are 0";}
this->A = A; 
this->B = B;
this->C = C;
this->D = D;
};

double Expression::get_parameter(char symbol){
if(symbol == 'A' or symbol == 'a') return A;
if(symbol == 'B' or symbol == 'b') return B;
if(symbol == 'C' or symbol == 'c') return C;
if(symbol == 'D' or symbol == 'd') return D;
};

void Expression::set_parameter(char symbol, double value){
if(symbol == 'A' or symbol == 'a') A = value;
if(symbol == 'B' or symbol == 'b') B = value;
if(symbol == 'C' or symbol == 'c') C = value;
if(symbol == 'D' or symbol == 'd'){
		if(D > 41){
				this->A = 0;this->B = 0;this->C = 0;this->D = 0;
				throw "D can`t be more than 41. All param. are 0";
			  }
		 D = value;
		}
if(D == 41 and A == 0 and B == 0 and C == 0){
	
	this->A = 0;this->B = 0;this->C = 0;this->D = 0;
	throw "Denominator can`t be 0. All param. are 0";}
};

double Expression::calculate(){
double value;
value = (( (A*B)/4 - 1 ) / ( sqrt(41 - D) - B*A + C ));
return value;
};
