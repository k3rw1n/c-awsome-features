#include<stdio.h>
#define MAX 300
#define STEP 20
void convert(float);
main()
{
float huashi,ceshi=0;
	printf("=====TEMPRETURE CONVERT TABLE=====\n");
	while(huashi<MAX){
	convert(huashi);
	huashi+=STEP;
	}
}
void convert(float huashi){
    float ceshi;
    ceshi=5*(huashi-32)/9;
	printf("%6.2f\t%6.2f\t\n",huashi,ceshi);
}
