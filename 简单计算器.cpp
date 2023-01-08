#include<stdio.h>

int main(void){
	int number1,number2,flag;
	char op;
	op=' ';
	flag=1;
	scanf("%d",&number1);
	while(op!='='){	
		scanf("%c",&op);
		if(op=='=')  break;
		scanf("%d",&number2);
		if(op=='+'){
			number1=number1+number2;}
		else if(op=='*'){
			number1=number1*number2;}
		else if(op=='-'){
			number1=number1-number2;}
		else if(op=='/'){
			if(number2==0){flag=0;break;}
			else number1=number1/number2;}
		else flag=0;
	}
	if(flag==0)  printf("ERROR");
	if(flag==1)  printf("%d",number1);
}

