#ifndef studysubject
#define studysubject
//Спробувати скомпілювати без додю бібліотек
#include<string>
class StudySubject{
std::string sub_name = "";
int hour = 0;
public:
void set(std::string,int);
std::string name();
int hours();
void set_obj(StudySubject&);
StudySubject();
};
#endif
