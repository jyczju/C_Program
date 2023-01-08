#include<stdio.h>

int main(void){
	static int a[4];
	static int b[4];
	int number,i;
	scanf("%d",&number);
	for(i=3;i>=0;i--){
		a[i]=number%10;
		number=number/10;}
	for(i=3;i>=0;i--){
		a[i]=(a[i]+9)%10;}
	b[0]=a[2];b[1]=a[3];b[2]=a[0];b[3]=a[1];
	for(i=0;i<4;i++){
		printf("%d",b[i]);
	}
} 
