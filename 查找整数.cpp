#include<stdio.h>

int main(void){
	static int a[20];
	int N,X,i;
	scanf("%d %d",&N,&X);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
		if (X==a[i]){
			printf("%d",i);
			break;
		}
	}
	if(i>=N)  printf("Not Found");
} 
