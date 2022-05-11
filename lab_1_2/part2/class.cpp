#include"class.h"

StudySubject::StudySubject(){
sub_name = "None";
hour = 0;
};

void StudySubject::set(std::string str, int hour){
this->sub_name = str;
this->hour = hour;
};

std::string StudySubject::name(){
return sub_name;
};

int StudySubject::hours(){
return hour;
};

void StudySubject::set_obj(StudySubject& sub){
this->sub_name = sub.name();
this->hour = sub.hours();
};
