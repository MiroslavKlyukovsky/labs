#include"class.h"

Book::Book(){
this->pages_numb = 0;
this->lang = "";
};

void Book::set(int pages_numb, std::string language){
this->pages_numb = pages_numb;
this->lang = language;
};

int Book::pages_num(){
return pages_numb;
};

std::string Book::language(){
return lang;
};

int Book::eng_num_of(Book* arr, int size){
int counter = 0;
for(int i = 0; i < size; i++){
if((*(arr+i)).language() == "English") counter++;
}
return counter;
};
