#include<stdio.h>
main(){
    int huashi;
    for (huashi=300;huashi>=0;huashi-=20)
    printf("%3d %6.1f\n",huashi,(5.0/9.0)*(huashi-32));
}