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
}
