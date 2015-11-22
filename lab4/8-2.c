#include<unistd.h>
#include<stdio.h>/* stdio.h 定义了BUFSIZE */

int main(void)
{
    char buf[BUFSIZ];
    int n;
    while((n=syscall(read, 0, buf, BUFSIZ)) > 0){
        syscall(write, 1, buf, n);
    }
    return 0;
}