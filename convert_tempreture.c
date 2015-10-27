#include<stdio.h>
#define MAX 300
#define STEP 20
main()
{
int huashi,ceshi=0;
	while(huashi<MAX){
	ceshi=5*(huashi-32)/9;
	printf("%d\t%d\t\n",huashi,ceshi);
	huashi+=STEP;
	}
}
