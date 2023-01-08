#include<stdio.h>

int main(void){
	static int a[6][6];
	int i,j,n,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		c++;
		a[0][i]=c;
	}
	for(i=1;i<n;i++){
		c++;
		a[i][n-1]=c;
	}
	for(i=n-2;i>=0;i--){
		c++;
		a[n-1][i]=c;
	}
	for(i=n-2;i>=1;i--){
		c++;
		a[i][0]=c;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
