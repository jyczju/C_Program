#include<stdio.h>

int main(void){
	static int a[6][6];
	int m,n,i,j,sum=0;
	
	scanf("%d %d",&m,&n);

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum=sum+a[i][j];
		}
		printf("%d\n",sum);
		sum=0;
	}
} 
