#include "class.h"
#include <iostream>
int main(){
 
  Dim2array array(3,6);
  
  char arr1[6]={'q','w','e','r','3','y'};
  char arr2[6]={'3','s','d','f','g','h'};
  char arr3[6]={'z','x','c','v','3','n'};
 
  for(int i = 0; i < 6; i++){
   *(array[0]+i) = arr1[i];
  }

  for(int i = 0; i < 6; i++){
   *(array[1]+i) = arr2[i];
  }
  
  for(int i = 0; i < 6; i++){
   *(array[2]+i) = arr3[i];
  }
   
  for(int i = 0; i < 6; i++){
    std::cout << *(array[0]+i) << ' ';
  }
  std::cout << std::endl;
 
  std::cout << array.get_num_amount() << std::endl;
 
  return 0;
}
