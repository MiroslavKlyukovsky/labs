#ifndef ALPHABETSTRING_CLASS
#define ALPHABETSTRING_CLASS
#include<iostream>
#include<string>
#include"string_class.cpp"
class AlphabetString: public String{
  private:
    int Size;
    char* Array;
  public:
    AlphabetString(int,std::string);
    ~AlphabetString();
    void get_new(int,char*);
    int length();
    void change() override;
    char* get_result();
};
#endif
