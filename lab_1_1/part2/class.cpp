#include "class.h"

bool Segment::set(int dot_num, char dot_x_or_y, double dot_val){
double* changeable = nullptr;
double tmp = 0;
if(dot_num == 1 and dot_x_or_y == 'x'){tmp = dot1X; dot1X = dot_val;changeable = &dot1X;};
if(dot_num == 1 and dot_x_or_y == 'y'){tmp = dot1Y; dot1Y = dot_val;changeable = &dot1Y;};
if(dot_num == 2 and dot_x_or_y == 'x'){tmp = dot2X; dot2X = dot_val;changeable = &dot2X;};
if(dot_num == 2 and dot_x_or_y == 'y'){tmp = dot2Y; dot2Y = dot_val;changeable = &dot2Y;};
if(length()==0){*changeable = tmp; return false;};
return true;
};

double Segment::length(){
return sqrt(pow(dot2X-dot1X,2.0)+pow(dot2Y-dot1Y,2.0));
};

double Segment::oy_angle(){
return acos((dot2Y-dot1Y)/length())*57.2958;
};

int Segment::get(int dot_num, char dot_x_or_y){
if(dot_num == 1 and dot_x_or_y == 'x'){return dot1X;};
if(dot_num == 1 and dot_x_or_y == 'y'){return dot1Y;};
if(dot_num == 2 and dot_x_or_y == 'x'){return dot2X;};
if(dot_num == 2 and dot_x_or_y == 'y'){return dot2Y;}; 
};
