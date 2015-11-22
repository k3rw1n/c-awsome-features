#ifndef COURSES_NUMBER
#define COURSES_NUMBER (sizeof courses /sizeof courses[0])
#endif

#include<string.h>

struct course{
    int id;
    char * name;
}courses[]={
    1,"Linux",5,"C++",10,"HTML",7,"HTML5",21,"NodeJS",39,"Shell",22,"Python"
};

}
void judge(int c);