#include<stdio.h>
int main(void){
	int i,n,a;
	scanf("%d",&n);
	a=1;
	for(i=n;i>=2;i--){
		a=2*(a+1);}
	printf("%d",a); 
	return 0;
} 
