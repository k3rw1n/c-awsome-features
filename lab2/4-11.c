#include<stdio.h>
#include<ctype.h>
#define NUMBER '0'
int getch(void);


int getop(char s[])
{
    int c,i;
    static int tmp=0;
    if(tmp==0)
    c=getch();
    else{
        c=tmp;
        tmp=0;
    }
    while((s[0]=c)==' '||c=='\t')
    c=getch();
    s[1]='\0';
    if(!isdigit(c))
    while (isdigit(s[++i]=c=getch()))
    ;
    if(c=='.')
        while(isdigit(s[++i]=c=getch()))
        ;
        s[i]='\0';
        if(c!=EOF)
        tmp=c;
        return NUMBER;
}