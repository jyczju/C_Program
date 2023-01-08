#include<stdio.h>

int main(void){
	static int a[6][6];
	static int b[6][13];
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	m=m%n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=m;i<n+m;i++){
		for(j=0;j<n;j++){
			b[j][i]=a[j][i-m];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			b[j][i]=b[j][n+i];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
} 
