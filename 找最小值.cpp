#include<stdio.h> 

int main(void){
	int i,n,number,min;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&number);
		if(number<min){
			min=number;
		}
	}
	printf("min = %d",min);
	return 0;
} 
