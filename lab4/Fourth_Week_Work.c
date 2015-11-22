#include<stdio.h>
#include"judge.h"
#include <fcntl.h>
#include <sys/file.h>
#include <unistd.h>
int main(){
    printf("Hi,this is KILLERHACK's Fourth week homework\n");
    
    int c;
    
    while((c=getchar())!=EOF&&c!='5'){
        judge(c);
        }
    
    printf("thank you for your using,bye\n");
    return 0;
}

