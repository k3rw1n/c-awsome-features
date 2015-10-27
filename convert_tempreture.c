#include<stdio.h>
#define MAX 300
#define STEP 20
main()
{
float huashi,ceshi=0;
	while(huashi<MAX){
	ceshi=5*(huashi-32)/9;
	printf("%6.2f\t%6.2f\t\n",huashi,ceshi);
	huashi+=STEP;
	}
}
