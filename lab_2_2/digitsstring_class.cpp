#include"digitsstring_class.h"

DigitsString::DigitsString(int size,std::string str):AlphabetString(size,str){};

void DigitsString::change(){
char* arr = new char[length()*2];
for(int i = 0; i < length(); i++){
	arr[i] = *(get_result()+i);
}
for(int i = length(); i < (length()*2); i++){
	arr[i] = *(get_result()+i-length());
}
get_new(length()*2,arr);
};

