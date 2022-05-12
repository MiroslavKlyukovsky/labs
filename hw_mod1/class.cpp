#include "class.h"

Dim2array::Dim2array(int arrnum, int symbnum){
amount_numb = 0;
arnum = arrnum;
symnum = symbnum;
Array = new char* [arrnum];
for(int i = 0; i < arrnum; i++){ Array[i] = new char[symbnum];}
};

Dim2array::~Dim2array(){
for(int i = 0; i < arnum; i++){ 
 delete[] Array[i];
 Array[i] = nullptr;
}
delete[] Array;
Array = nullptr;
};

char* Dim2array::operator [] (int arrnum){
numb_inside_calc();
return Array[arrnum];
};

void Dim2array::numb_inside_calc(){
amount_numb = 0;
for(int i = 0; i < arnum; i++){ 
  for(int j = 0; j < symnum; j++){ 
   if( *(Array[i]+j) > 47 and *(Array[i]+j) < 58 ) amount_numb++;
  }
}
};

int Dim2array::get_num_amount(){
numb_inside_calc();
return amount_numb;
};
