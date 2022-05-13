#ifndef hw_mod1
#define hw_mod1
class Dim2array{
  private:
  char** Array;
  int arnum, symnum;
  int amount_numb;
  public:
  Dim2array(int,int);
  ~Dim2array();
  char* operator [] (int);
  void numb_inside_calc();
  int get_num_amount();
  operator int();
};
#endif
