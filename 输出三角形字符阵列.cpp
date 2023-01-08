#include<stdio.h>

int main(void){
	char op;
	int n,i,j;
	op='A';
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%c ",op);
			op=op+1;
		}
		printf("\n");
	}
	
} 
