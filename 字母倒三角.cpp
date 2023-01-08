#include<stdio.h>

int main(void){
	int n,i,j,n0;
	char c='A';
	scanf("%d",&n);
	n0=n;
	for(i=1;i<=n0;i++){
		for(j=1;j<=n;j++){
			printf("%c ",c);c++;
		}
		printf("\n");
		n--;
	}
} 
