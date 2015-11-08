#include<stdio.h>
#define MAX 300
#define STEP 20
main()
{
float huashi,ceshi=0;
	printf("=====TEMPRETURE CONVERT TABLE=====");
	while(huashi<MAX){
    	huashi=9.0/5*ceshi+32;
    	printf("%6.2f\t%6.2f\t\n",ceshi,huashi);
    	ceshi+=STEP;
	}
}
