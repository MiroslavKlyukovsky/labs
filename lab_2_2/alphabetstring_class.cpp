#include"alphabetstring_class.h"

AlphabetString::AlphabetString(int size,std::string str){
  Size = size;
  Array = new char[Size];
  for(int i = 0; i < Size; i++){
      Array[i] = str[i];
  }
};

AlphabetString::~AlphabetString(){
  delete[] Array;
  Array = nullptr;
  Size = 0;
};

int AlphabetString::length(){
  return Size;
};

void AlphabetString::change(){
  char tmp = ' ';
  for(int i = 0; i < Size; i++){
      tmp = Array[i];
      Array[i] = Array[Size-1-i];
      Array[Size-1-i] = tmp;
  }
};

char* AlphabetString::get_result(){
return Array;
};

void AlphabetString::get_new(int val,char* val1){
delete[] Array;
Array = val1;
Size = val;
};
