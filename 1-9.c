#include<stdio.h>
main()
{
    int c,nl=0;
    while((c=getchar())!=EOF){
        if (c==' ')
        nl++;
        else{
            
            if (nl!=0){
                putchar(' ');
                nl=0;
            }
            putchar(c);
        }
    }
}