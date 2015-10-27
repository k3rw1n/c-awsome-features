#include<stdio.h>
main(){
int c;
long kongge,zhibiao,huanhang=0;
    while((c=getchar())!=EOF){
        putchar(c);
        switch(c){
            case ' ':kongge++;
            case '\t':zhibiao++;
            case '\n':huanhang++;
            default:continue;
        }
    }
    printf ("%ld %3ld %ld",kongge,zhibiao,huanhang);
    
}