#include "class.h"

void String::set(char tmp){
        bool is_tmp_correct;
        is_tmp_correct = (tmp != 10);
        if(is_tmp_correct){
                Length++;
                char_array[Length-1] = tmp;
        }
};

int16_t String::length(){
	return Length;
};

void String::sort(){
  for (int step = 0; step < (Length-1); ++step) {
       int swapped = 0;
     for (int i = 0; i < (Length-step-1); ++i) {
          if (char_array[i] > char_array[i + 1]) {

       		 int temp = char_array[i];
       		 char_array[i] = char_array[i + 1];
        	 char_array[i + 1] = temp;
        	 swapped = 1;
          }
     }
   if (swapped == 0){
     break;}
  }
};

char String::get(int which){
	return char_array[which];
};

String operator * (char symbol, String str){
char tmp = ' ';
for(int i = str.length(); i > 0 ;i--){
  str.char_array[i] = str.char_array[i-1];
}
str.char_array[0] = symbol;
str.Length++;
return str;
};

String String::operator *(char symbol){
char_array[Length++] = symbol;
return *this;
};

String String::operator + (String str){
for(int i = 0;i < str.length(); i++){
set(str.get(i));
}
return *this;
};

bool String::operator == (String str){
return (this->length()==str.length());
};

String String::operator -- (){
char_array[0] = ' ';
Length--;
for(int i = 0; i < Length;i++){
char_array[i] = char_array[i+1];
}
return *this;
};

bool String::empty(){
return Length==0;
};

String::String(char symbol, int def_length){
for(int i = 0; i < 100; i++){
char_array[i] = symbol;
}
Length = def_length;
};

String::String(char symbol,int def_length, int amount){
for(int i = 0; i < amount; i++){
char_array[i] = symbol;
}
Length = def_length;
};

String::String(){};
