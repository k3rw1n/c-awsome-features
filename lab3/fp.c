#ifndef COURSES_NUMBER
#define COURSES_NUMBER (sizeof courses /sizeof courses[0])
#endif

#include<stdio.h>

int main()
{
FILE *fp;
int i=0;
struct course{
    int id;
    char * name;
}courses[]={
    1,"Linux",5,"C++",10,"HTML",7,"HTML5",21,"NodeJS",39,"Shell",22,"Python"
};
fp=fopen("/tmp/courselist.txt","w");
                    for(;i<COURSES_NUMBER;i++)
                    fprintf(fp,"%3d%s\t",courses[i].id,courses[i].name);

}
