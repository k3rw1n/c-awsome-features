#include<stdio.h>
#define MAXLINE 1000
#define LONGEST 80
int getline2(char a[],int m);
int main(){
    char line[MAXLINE];
    char logest[MAXLINE];
    int len;
    while((len=getline(line,MAXLINE))>0)
    if(len>LONGEST)
        printf("%s",line);
        return 0;
}

int getline2(char s[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}