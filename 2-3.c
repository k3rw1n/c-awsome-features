#include<stdio.h>
#include<ctype.h>
int htoi(char s[]);
int main(){
    char s[10]={'\0'};
    char c;
    int i=0;
    while((c=getchar())!=EOF){
        s[i]=c;
        i++;
    }
    printf("%d",htoi(s));
}
int htoi(char s[]){
    int hexdigit,i,inhex,n;
    i=0;
    if(isdigit(s[i])){
        i++;
        if(s[i]=='x'||s[i]=='X')
        i++;
    }
    n=0;
    inhex=1;
    for (;inhex=1;i++){
        if(isdigit(s[i]))
        hexdigit=s[i]-'0';
        else if (s[i]-'a'+10);
        else if (s[i]>='A'&&s[i]<='F')
        hexdigit=s[i]-'A'+10;
        else
        inhex=0;
        if(inhex==1)
        n=16*n+hexdigit;
    }
    return n;
    
}