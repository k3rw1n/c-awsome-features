#ifndef COURSES_NUMBER
#define COURSES_NUMBER 7
#endif

#include<string.h>

char * courses[COURSES_NUMBER]={"Linux", "C++", "HTML", "HTML5", "NodeJS", "Shell" ,"Python"};

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
                    printf("%s\t",courses[i]);
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
                    // j=(j>=strlen(courses[i]))?j:strlen(courses[i]);
                    if(strlen(courses[i])>j)
                    {
                        j=strlen(courses[i]);
                        strcpy(m,courses[i]);
                    }
                    
                    printf("the course who has the longest name is %s\n",m);
                    // j=0;
                    break;
                    }
            case '4':
                    {
                    printf("enter an course name,to search whether it is one of our course\n");
                    char x[15]={0};
                    scanf("%s",x);
                    for(i=0;i<COURSES_NUMBER;i++)
                        if(!strcmp(x, courses[i])){
                            printf("yes,it is one of our course\n");
                            // j=0;
                            printf("It's %s\n",courses[i]);
                            x[14]=1;//flag
                            break;
                        }
                        if((i==COURSES_NUMBER-1)&&x[14]==0)
                        printf("No,we never heard this course\n");
                     
                        break;
                    }
                    
            //there needn't case '5':
                    
            default :
            {
            printf("\n\n\nPlease enter an command,enter 0 to see usage\n>>");
            break;
                
            }
}
}
void judge(int c);