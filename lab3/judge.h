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

void judge(int c){
    int i,j=0;
    switch(c){
            case '0':
                    {
                    printf("0.help information\n"
                            "1.print all the class name of shiyanlou\n"
                            "2.print the totall count of courses\n"
                            "3.print the course whose name is longest\n"
                            "4.enter an course name,to search whether it is one of our course\n"
                            "5.quit the course\n");
                            break;
                    }
            case '1':
                    {
                    printf("our courses contains:\n");
                    for(i=0;i<COURSES_NUMBER;i++)
                    printf("%3d%s\t",courses[i]->id,courses[i]->name);
                    printf("\n");
                    // i=0;
                    break;
                    }
            case '2':
                    {
                    printf("the totall count of courses is %d\n",COURSES_NUMBER);
                    break;
                    }
            case '3':
                    {
                    char m[15];
                    for(i=0;i<COURSES_NUMBER;i++)
                    
                    if(strlen(courses[i]->name)>j)
                    {
                        j=strlen(courses[i]->name);
                        strcpy(m,courses[i]->name);
                    }
                    printf("the course who has the longest name is %s\n",m);
                    break;
                    }
            case '4':
                    printf("enter an course name and its ID,to search whether it is one of our course\n");
                    char x[15];
                    printf("please enter the course name");
                    scanf("%s",x);
                    printf("please enter the id");
                    while(getchar()!='\n')
                    ;
                    
                    for(;i<COURSES_NUMBER;i++)
                        if(!strcmp(x, (courses+i)->name)){
                            printf("yes,it is one of our course\n");
                            
                            printf("It's %s",courses[i]->name);
                            break;
                        }
                        if((i==COURSES_NUMBER-1)&&x[14]==0)
                        printf("No,we never heard this course\n");
                        break;
                    }
                    
            default :
            {
            printf("\n\n\nPlease enter an command,enter 0 to see usage\n>>");
            break;
                
            }
}
}
void judge(int c);