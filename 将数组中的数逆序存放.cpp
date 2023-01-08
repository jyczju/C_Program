#include<stdio.h>

int main(void){
	static int a[10];
	int n,i;
	scanf("%d",&n);
	for(i=n-1;i>=0;i--){
		scanf("%d",&a[i]);
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++){
		printf(" %d",a[i]);
	}
}
