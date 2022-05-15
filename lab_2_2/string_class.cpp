#ifndef STRING_CLASS
#define STRING_CLASS
class String{
  public:
  virtual int length() = 0;
  virtual void change() = 0;
  virtual char* get_result() = 0;
};
#endif
