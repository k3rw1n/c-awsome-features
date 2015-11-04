#include<stdio.h>
int main(){
int type;
double op2;
char s[MAXOP];
int flag=TRUE;

while((type=Getop(s))!=EOF)	{
switch(type){
case '%':
	op2=pop();
	if(op2)	
	push(fmod(pop(),op2));
	else
	printf("the op2 cannot be 0\n");
	break;
}
}
return 0;
}
