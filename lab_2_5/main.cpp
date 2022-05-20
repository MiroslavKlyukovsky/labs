#include "expression_class.h"
#include <iostream>
int main(){
	Expression expression(2,3,5,5);
	std::cout<< expression.calculate() << '\n';
	

	try
	{
		Expression expression1(2,2,2,44);
	}
	catch(const char* exception)
	{
		std::cout << exception << '\n';
	}
	

	Expression expression2(2,2,2,2);
	std::cout << expression2.get_parameter('A') << '\n';
	std::cout << expression2.get_parameter('b') << '\n';
	std::cout << expression2.get_parameter('C') << '\n';
	std::cout << expression2.get_parameter('d') << '\n';

	try
	{
		expression2.set_parameter('d',41);
		expression2.set_parameter('a',0);
		expression2.set_parameter('b',0);
		expression2.set_parameter('c',0);
	}
	catch(const char* exception)
	{
		std::cout << exception << '\n';
	
	}


	Expression array[5];
	for(int i = 1; i < 6; i++)
	{
		array[i-1].set_parameter('d',34 % i);
		array[i-1].set_parameter('a',8 % i);
		array[i-1].set_parameter('b',5 % i);
		array[i-1].set_parameter('c',3 % i);
		std::cout << "i: " << i << ' ' <<  array[i-1].calculate() << std::endl;
	}

	return 0;
};
