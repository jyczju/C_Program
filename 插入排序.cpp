#include<stdio.h>

int main(void){
	int a[11];
	int n,i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(i=9;i>=0;i--){
		if(n>=a[i]){
			a[i+1]=n;break;
		}
		else{
			a[i+1]=a[i];
		}
	}
	if(n<a[0]){
		a[0]=n;
	}
	for(i=0;i<11;i++){
		printf("%d ",a[i]);
	}
} 
