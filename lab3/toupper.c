#include<stdio.h>
#include<ctype.h>
main(){
    int c;
    while ((c=getchar())!=EOF)
    putchar(toupper(c));
    return 0;
}