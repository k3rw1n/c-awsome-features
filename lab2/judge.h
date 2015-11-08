#ifndef COURSES_NUMBER
#define COURSES_NUMBER 7
#endif

#include<string.h>

char *courses[COURSES_NUMBER]={"Linux", "C++", "HTML", "HTML5", "NodeJS", "Shell" ,"Python"};

void judge(int c){
    int i,j=0;
    switch(c){
            case '0':
                    printf("0.help information\n"
                            "1.print all the class name of shiyanlou\n"
                            "2.print the totall count of courses\n"
                            "3.print the course whose name is longest\n"
                            "4.enter an course name,to search whether it is one of our course\n"
                            "5.quit the course\n");
                            break;
            case '1':
                    printf("our courses contains:\n");
                    for(;i<COURSES_NUMBER;i++)
                    printf("%s\t",courses[i]);
                    printf("\n");
                    // i=0;
                    break;
            case '2':
                    
                    printf("the totall count of courses is %d\n",COURSES_NUMBER);
                    
                    break;
            case '3':
                    for(i=0;i<COURSES_NUMBER;i++)
                    j=(j>=strlen(courses[i]))?j:strlen(courses[i]);
                    printf("the course who have the longest length name is %s\n",j);
                    // j=0;
                    break;
            case '4':
                    printf("enter an ID,to search whether it is one of our course\n");
                    scanf("%d",&j);
                    for(;i<=6;i++)
                        if(j==courses[i]){
                            printf("yes,it is one of our course\n");
                            // j=0;
                            break;
                        }
                        printf("No,we never heard this course\n");
                        // j=0;
                        break;
                    
            //there needn't case '5':
                    
            default :
            printf("\n\n\nPlease enter an command,enter 0 to see usage\n>>");
            break;
}
void judge(int c);