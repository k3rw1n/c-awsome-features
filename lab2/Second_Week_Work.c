#include<stdio.h>
#include"judge.h"
int main(){
    printf("Hi,this is KILLERHACK's secondt week homework\n");
    
    int c;
    
    while((c=getchar())!=EOF&&c!='5'){
        judge(c);
        }
    
    printf("thank you for your using,bye\n");
    return 0;
}

