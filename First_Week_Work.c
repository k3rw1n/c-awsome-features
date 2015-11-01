#include<stdio.h>
int main(){
    printf("Hi,this is KILLERHACK's first week homework\n");
    printf("Please enter an command,enter 0 to see usage\n");
    int c;
    int courses[6]={1,5,10,7,21,39,22};
    int i=j=0;
    while((c=getchar())!=EOF){
        switch(c){
            case '0':
                    printf("0.help information\n"
                            "1.print all the class of shiyanlou\n"
                            "2.print the totall count of courses\n"
                            "3.print the MAX ID of course\n"
                            "4.enter an ID,to search whether it is one of our course\n"
                            "5.quit the course\n");
                            break;
            case '1':
                    printf("our courses contains:\n");
                    for(;i<=6;i++)
                    printf("%3d\t",courses[i]);
                    i=0;
                    break;
            case '2':
                    for(;i<=6;i++)
                    j+=courses[i];
                    i=0;
                    printf("the totall count of courses is %d",j);
                    j=0;
        }
    }
}