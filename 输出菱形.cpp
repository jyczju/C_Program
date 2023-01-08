#include<stdio.h> 

int main(void)
{
	int i,j,k,n;
	scanf("%d",&n);
	
	for(i=n;i>=1;i=i-2){
		for(j=1;j<=(i-1)/2;j++){
			printf("  ");
		}
		for(k=1;k<=n+1-i;k++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=2;i<=n;i=i+2){
		for(j=1;j<=i/2;j++){
			printf("  ");
		}
		for(k=1;k<=n-i;k++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
