#include<stdio.h>

int main(void)
{
	int a,b,N,count;
	scanf("%d",&N);
	count=2; 
	if (N<=1)  printf("1");
	else {a=b=1;
	while((a<N)&&(b<N)){
		if(b>=a)  a=a+b;
		else  b=a+b;
		count++;
		}
		printf("%d",count);
	}
	
	return 0; 
 } 
