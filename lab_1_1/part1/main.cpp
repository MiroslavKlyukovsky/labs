#include<iostream>
#include"class.h"

int main(){
  char symbol;
  String str;
  std::cin >> symbol;
  while(symbol != 10 and !std::cin.eof()){
  	str.set(symbol);
	std::cin >> symbol;
  }

  std::cout << str.length() << '\n';
  
  str.sort();
  
  for(int i = 0; i < str.length();i++){
    std::cout<<  str.get(i)<< '\n';
  }

  return 0;
}
