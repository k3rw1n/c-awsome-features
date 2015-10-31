#include<stdio.h>
#include<ctype.h>
int main(){
    int s[10];
    
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
    inhex=TRUE;
    for (;inhex=TRUE;i++){
        if(isdigit(s[i]))
        hexdigit=s[i]-'0';
        else if (s[i]-'a'+10);
        else if (s[i]>='A'&&s[i]<='F')
        hexdigit=s[i]-'A'+10;
        else
        inhex=FALSE;
        if(inhex==TRUE)
        n=16*n+hexdigit;
    }
    return n;
    
}