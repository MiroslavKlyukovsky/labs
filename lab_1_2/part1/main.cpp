#include<iostream>
#include"class.h"
#include"fswap.h"
int main(){

std::string Languages[4]={"English","Spanish","French","Latin"};
Book library[30];

for(int i = 0; i < 14; i++){
 library[i].set(560%((i+1)*3),Languages[i%4]);
}

for(int i = 0; i < 30; i++){
 std::cout << "Book number " << i+1 << " language is " << library[i].language() << " page number is " << library[i].pages_num() << '\n';
}

for(int i = 0; i < 7;i++){
  f_swap(library[i],library[13-i]);
}

std::cout << "------------------------------------" << '\n';

std::cout << "Book number " << 3 << " language is " << library[3].language() << " page number is " << library[3].pages_num() << '\n';
std::cout << "Book number " << 10 << " language is " << library[10].language() << " page number is " << library[10].pages_num() << '\n';

std::cout << "------------------------------------" << '\n';

std::cout << "Amount of books is: "<< library[0].eng_num_of(library,30) << '\n';

return 0;
}
