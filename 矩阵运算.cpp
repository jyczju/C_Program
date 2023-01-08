#include<stdio.h>

int main(void){
	static int a[10][10];
	int i,j,n,sum=0,sum1=0,sum2=0,sum3=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sum=sum+a[i][j];
		}
	}
	for(i=0;i<n;i++){
		sum1=sum1+a[i][n-1-i];
	}
	for(i=0;i<n;i++){
		sum2=sum2+a[n-1][i];
	}
	for(i=0;i<n;i++){
		sum3=sum3+a[i][n-1];
	}
	sum=sum-sum1-sum2-sum3+a[0][n-1]+a[n-1][0]+a[n-1][n-1];
	printf("%d",sum);
}
