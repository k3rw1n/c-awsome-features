#include<stdio.h>
main(){
    int c,i=0;
    char x[1000]={0};
    while((c=getchar())!=EOF){
        while((c=getchar())!='\n')
        {
            i++;
            x[i]=c;
        }
       
        if (i>80){
           for(int j=0;j<i;j++) {
               putchar(x[j]);
           }
            
        }
        i=0;
        
    }
}