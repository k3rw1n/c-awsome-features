#include<stdio.h>
int main(){
    printf("Hi,this is KILLERHACK's first week homework\n");
    
    int c;
    int courses[7]={1,5,10,7,21,39,22};
    int i=0;
    int j=0;
    while((c=getchar())!=EOF&&c!='5'){
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
                    printf("\n");
                    i=0;
                    break;
            case '2':
                    for(;i<=6;i++)
                    j+=courses[i];
                    i=0;
                    printf("the totall count of courses is %d\n",j);
                    j=0;
            case '3':
                    for(i=0;i<=6;i++)
                    j=(j>=courses[i])?j:courses[i];
                    printf("the MAX ID of course is %d\n",j);
                    j=0;
                    break;
            case '4':
                    printf("enter an ID,to search whether it is one of our course\n");
                    scanf("%d",&j);
                    for(;i<=6;i++)
                        if(j==courses[i]){
                            printf("yes,it is one of our course\n");
                            j=0;
                            break;
                        }
                        printf("No,we never heard this course\n");
                        j=0;
                        break;
                    
            //there needn't case '5':
                    
            default :
            printf("\n\n\nPlease enter an command,enter 0 to see usage\n>>");
            break;
        }
    }
    printf("thank you for your using,bye\n");
    return 0;
}