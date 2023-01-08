#include<stdio.h>

int main(void){
	static int a[10]={1,1};
	static int b[10];
	int N,i,j;
	
	scanf("%d",&N);
	if(N==1)   printf("   1");
	else if(N==2)   printf("    1\n   1   1");
	else {
		for(i=1;i<=N+2;i++){
			printf(" ");
		}
		printf("1\n");
		for(i=1;i<=N+1;i++){
			printf(" ");
		}
		printf("1   1\n");
		for(i=3;i<=N;i++){
			b[0]=1;b[i-1]=1;
			for(j=1;j<=i-2;j++){
				b[j]=a[j-1]+a[j];
			}
			for(j=1;j<=N-i;j++){
				printf(" ");
			}
			for(j=0;j<=i-1;j++){
				printf("%4d",b[j]);
			}
			printf("\n");
			for(j=0;j<=i-1;j++){
				a[j]=b[j];
			}
		}
	}
}
