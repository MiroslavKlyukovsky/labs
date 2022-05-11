#ifndef lab_1_2
#define lab_1_2
#include<string>
class Book{
std::string lang;
int pages_numb;
public:
Book();
void set(int pages_numb, std::string language);
int pages_num();
std::string language();
int eng_num_of(Book* arr,int size);
};
#endif
