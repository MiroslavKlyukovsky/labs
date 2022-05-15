#include"string_class.cpp"
#include"alphabetstring_class.h"
#include"digitsstring_class.h"
#include<iostream>

int main(){

	String* sptr;
	AlphabetString* asptr;

	DigitsString dgstr(6,"qwerty");
	
	asptr = &dgstr;
		
	asptr->change();//я хочу від нього зміни як в алфабет, а не як в діджітстрінг
	dgstr.change();
	
	std::cout << dgstr.length() << std::endl;
	for(int i = 0; i < dgstr.length(); i++){
		std::cout << *(dgstr.get_result() + i);
	}
	std::cout << std::endl;
	
	
	return 0;
}

