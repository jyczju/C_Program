#include<stdio.h>

int main(void){
	static char op[80];
	int i=0,count=0;
	while((op[i]=getchar())!='\n'){
		if(op[i]>='B'&&op[i]<='Z'&&op[i]!='A'&&op[i]!='E'&&op[i]!='I'&&op[i]!='O'&&op[i]!='U'){
			count++;
		}
		i++;
	}
	printf("%d",count);
}
