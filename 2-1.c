#include<stdio.h>
#include<limits.h>
int main(){
printf("minimum signed char is %d\n"
"maximum signed char is %d\n"
"minimum signed short is %d\n"
"maximum signed short is %d\n"
"minimum signed int is %d\n"
"maximum signed int is %d\n"
"minimum signed long is %ld\n"
"maximum signed long is %ld\n"
"maximumimum unsigned char is %u\n"
"maximumimum unsigned short is %u\n"
"maximumimum unsigned int is %u\n"
"maximumimum unsigned long is %lu\n"
,SCHAR_MIN,SCHAR_MAX,SHRT_MIN,SHRT_MAX,INT_MIN,INT_MAX,LONG_MIN,LONG_MAX,UCHAR_MAX,USHRT_MAX,UINT_MAX,ULONG_MAX);	
}
