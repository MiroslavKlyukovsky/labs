#include"rhombus_class.h"	

Rhombus::Rhombus(double x, double y, double x2, double y2, double x3, double y3, double x4, double y4):Line(x,y,x2,y2){
this->x3 = x3;
this->y3 = y3;
this->x4 = x4;
this->y4 = y4;
rhombus_check();
diagonal1 = findout_diagonal(1);
diagonal2 = findout_diagonal(2);
};

double Rhombus::findout_diagonal(int which){
  if(which == 1)
  {
      if(casual)
      {
              return ((inside_length(getX(),getY(),x3,y3)));
      }else{
	      return ((inside_length(getX(),getY(),getX2(),getY2())));
      }
  }else{
      if(casual){
              return ((inside_length(getX2(),getY2(),x4,y4)));   
      }else{
              return ((inside_length(x4,y4,x3,y3)));
      } 
  }
};

bool Rhombus::rhombus_check(){
bool is_rhombus = false;
int segm0 = 0, segm1 = 0, segm2 = 0, segm3 = 0;

segm0 = inside_length(getX(),getY(),getX2(),getY2());
segm1 = inside_length(getX2(),getY2(),x3,y3);
segm2 = inside_length(x3,y3,x4,y4);
segm3 = inside_length(x4,y4,getX(),getY());

is_rhombus = ((segm0 == segm1) and (segm1 == segm2) and (segm2 == segm3) and (segm3 == segm0));

if(is_rhombus)
{
  casual = true;
  return is_rhombus;
}else{
segm0 = inside_length(getX2(),getY2(),x4,y4);
segm1 = inside_length(x4,y4,getX(),getY());
segm2 = inside_length(getX(),getY(),x3,y3);
segm3 = inside_length(x3,y3,getX2(),getY2());

is_rhombus = ((segm0 == segm1) and (segm1 == segm2) and (segm2 == segm3) and (segm3 == segm0));

if(is_rhombus)
{
casual = false;
return true;
}else{
return false;
}
}
};

double Rhombus::get_diagonal1(){ return diagonal1;};

double Rhombus::get_diagonal2(){ return diagonal2;};

double Rhombus::get_area(){return ((diagonal1*diagonal2)/2.0);};

double Rhombus::get_perimeter(){return (inside_length(x3,y3,x4,y4)*4);};
