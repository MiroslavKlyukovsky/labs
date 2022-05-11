#include<iostream>
#include"class.h"

void f_swap(StudySubject&, StudySubject&);
int sum_hour(StudySubject*,int);

int main(){
std::string name_arr[4]={"Linear Algebra","Mathematical Analysis","Discrete Math","Physics"};
StudySubject sub_array[30];

for(int i = 0;i < 14; i++){
sub_array[i].set(name_arr[i%4],i%7);
}

for(int i = 0;i < 30; i++){
std::cout << "Subject with name " << sub_array[i].name() << " has " << sub_array[i].hours() << " hours"<< '\n';
}

for(int i = 0;i < 15; i++){
f_swap(sub_array[i],sub_array[29-i]);
}
std::cout << "----------------------------------" << '\n';

for(int i = 0;i < 30; i++){
std::cout << "Subject with name " << sub_array[i].name() << " has " << sub_array[i].hours() << " hours"<< '\n';
}

std::cout << "----------------------------------" << '\n';

std::cout << "Amount of hours is " << sum_hour(sub_array,30) << '\n';

return 0;
}
void f_swap(StudySubject& sub1, StudySubject& sub2){
StudySubject tmp;
tmp.set_obj(sub1);
sub1.set_obj(sub2);
sub2.set_obj(tmp);
};

int sum_hour(StudySubject* arr, int size){
int sum = 0;
for(int i = 0;i < size; i++)
{sum += (*(arr+i)).hours();}
return sum;
};



