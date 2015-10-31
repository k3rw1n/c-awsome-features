#include<stdio.h>
#define N 8
int main(){
	int c,nb,pos;
	nb=0;
	pos=1;
	while((c=getchar())!=EOF){
		if (c=='\t'){
		nb=N-(pos-1);
		while(nb>0){
			putchar(' ');
			pos++;
			nb--;
		}
		}else if(c=='\n'){
		putchar(c);
		pos=1;}
		else{
		putchar(c);
		pos++;
		}

	}
}
