#include<stdio.h>

int main(void){
	char c;
	int a1,b1,a2,b2;
	double x,y;
	scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
	x=a1*b2;y=a2*b1;
	if(x<y)  c='<';
	else if(x>y)  c='>';
	else c='=';
	printf("%d/%d %c %d/%d",a1,b1,c,a2,b2);
} 
