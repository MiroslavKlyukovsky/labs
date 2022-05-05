#ifndef lab_1_1_t1_class
#define lab_1_1_t1_class
#include<sys/types.h>	
class String{
  char char_array[100] = {' '};
  int8_t Length = 0;
public:
  void set(char tmp);
  int16_t length();
  void sort();
  char get(int which);
};

#endif
