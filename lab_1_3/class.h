#ifndef lab_1_1_t1_class
#define lab_1_1_t1_class
#include<sys/types.h>	
//String can`t properly contain more than 99 symbols!
class String{
  char char_array[100] = {' '};
  int8_t Length = 0;
public:
  String();
  String(char, int);
  String(char, int, int);
  void set(char tmp);
  int16_t length();
  void sort();
  char get(int which);
  friend String operator * (char, String);
  String operator * (char);
  String operator + (String);
  bool operator == (String);
  String operator --();
  bool empty();
};

String operator * (char, String);

#endif
