#include<stdio.h>
#define IN 1
#define OUT 2
main(){
    int c,flag;
    flag=OUT;
    while((c=getchar())!=EOF){
        if (c==' '||c=='\t'||c=='\n'){
        if(flag==IN){
            flag=OUT;
            putchar('\n');
        }
        }
        else if(flag=OUT){
            flag=IN;
            putchar(c);
        }
        else
            putchar(c);
    }
}