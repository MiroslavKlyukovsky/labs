#include"fswap.h"
void f_swap(Book& book1, Book& book2){
Book tmp;
tmp.set(book1.pages_num(),book1.language());
book1.set(book2.pages_num(),book2.language());
book2.set(tmp.pages_num(),tmp.language());
};
