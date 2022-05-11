#include<iostream>
#include"class.h"

int main(){
  String str('$', 3);
  for(int i = 0; i < str.length();i++){
    std::cout<<  str.get(i)<< ' ';
  }
  std::cout << std::endl;
  
  str = --str;

  for(int i = 0; i < str.length();i++){
    std::cout<<  str.get(i)<< ' ';
  }
  std::cout << std::endl;
  
  String str1('*', 4 ,5);
  for(int i = 0; i < str1.length();i++){
    std::cout<<  str1.get(i)<< ' ';
  }
  std::cout << std::endl;
  
  str1 = '@'*str1;
  
  for(int i = 0; i < str1.length();i++){
    std::cout<<  str1.get(i)<< ' ';
  }
  std::cout << std::endl;

  String str2;
  
  str2 = str + str1;
  
  for(int i = 0; i < str2.length();i++){
    std::cout<<  str2.get(i)<< ' ';
  }
  std::cout << std::endl;
  
  return 0;
}
