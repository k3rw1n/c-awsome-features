#include<stdio.h>
#define IN 1
#define OUT 0
main()
{
int c,flag=OUT,length=0;
int i,j;
int n[11]={0};
	while((c=getchar())!=EOF){
    	if (c==' '||c=='\t'||c=='\n'){
        	if (flag=IN){
            	flag=OUT;
            	if(length>10){
            	    n[10]++;//>10 part
            	}
            	else {
            	n[length-1]++;
            	length=0;
            	}
        	}	
    	}
    	else{
    	flag=OUT;
    	length++;	
        }
    }
    for (i=0;i<=9;i++){
        printf("%-3d|",i+1);
        for (j=0;j<=n[i];j++){
            putchar('#');
        }
        printf("\n");
    }
    printf(">10|");
    for (j=0;j<=n[10];j++){
            putchar('#');
        }
    printf("\n");
}