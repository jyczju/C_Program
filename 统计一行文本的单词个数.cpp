#include<stdio.h>
int main(void){
	char op1,op2;
	int count=0;
	op1=getchar();
	op2=getchar();
	while (op2!='\n'){
		if((op1!=' ')&&(op2==' '))  count++;
		op1=op2;
		op2=getchar();}
	if (op1!=' ')  count++;
	printf("%d",count);
	return 0;
}
