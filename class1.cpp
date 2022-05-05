#include "class1.h"

bool Segment::set(int dot_num, char dot_x_or_y, int dot_val){
int* changeable = nullptr;
int tmp = 0;
if(dot_num == 1 and dot_x_or_y == 'x'){tmp = dot1X; dot1X = dot_val;changeable = &dot1X;};
if(dot_num == 1 and dot_x_or_y == 'y'){tmp = dot1Y; dot1Y = dot_val;changeable = &dot1Y;};
if(dot_num == 2 and dot_x_or_y == 'x'){tmp = dot2X; dot2X = dot_val;changeable = &dot2X;};
if(dot_num == 2 and dot_x_or_y == 'y'){tmp = dot2Y; dot2Y = dot_val;changeable = &dot2Y;};
/*if(dot1X == dot2X and dot1Y == dot2Y){*changeable = tmp;}
return (dot1X != dot2X and dot1Y != dot2Y);*/
return true;
};

double Segment::length(){
return sqrt(pow(dot2X-dot1X,2) + pow(dot2Y-dot1Y,2));
};

double Segment::oy_angle(){

};

int Segment::get(int dot_num, char dot_x_or_y){

};
