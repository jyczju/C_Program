#include<stdio.h>

int main(void){
	static char op[80];
	int i=0,count=0,k;
	int ch;
	while((op[i]=getchar())!='\n'){
		i++;}
	ch=getchar();
	for(k=0;k<=i-1;k++){
		if(op[k]==ch) count++;
	}
	printf("%d",count);
}
