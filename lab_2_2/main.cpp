#include"string_class.cpp"
#include"alphabetstring_class.h"
#include"digitsstring_class.h"
#include<iostream>

int main(){

	String* sptr;

	AlphabetString obj(6,"qwerty");

	sptr = &obj;

	sptr->change();
	
	std::cout << sptr->length() << std::endl;
	for(int i = 0; i < sptr->length(); i++){
		std::cout << *(sptr->get_result() + i);}
	

	std::cout << std::endl;
	

	DigitsString dgstr(6,"qwerty");
	
	sptr = &dgstr;
		
	sptr->change();
	
	std::cout << dgstr.length() << std::endl;
	for(int i = 0; i < dgstr.length(); i++){
		std::cout << *(dgstr.get_result() + i);}

	std::cout << std::endl;

	return 0;
}

