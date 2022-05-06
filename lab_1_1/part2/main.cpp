#include<iostream>
#include"class.h"
int main(){

Segment seg;

seg.set(1,'x',0);
seg.set(1,'y',0);
seg.set(2,'x',3);
seg.set(2,'y',4);

std::cout << "Length of segment is: " << seg.length() << '\n';

std::cout << "Angle with Oy is: " << seg.oy_angle() << " degrees"  << '\n';

std::cout << "X1: " << seg.get(1,'x') << '\n';
std::cout << "X2: " << seg.get(1,'y') << '\n';
std::cout << "Y1: " << seg.get(2,'x') << '\n';
std::cout << "Y2: " << seg.get(2,'y') << '\n';

return 0;
}
