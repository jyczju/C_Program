#include<stdio.h>

int main(void){
	static int a[10];
	static int b[9];
	int n,i,j,t,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	for(i=0;i<n-1;i++){
		b[i]=a[i+1]-a[i];
	}
	if((n-1)%3==0)  t=(n-1)/3;
	else t=(n-1)/3+1;
	for(i=1;i<=t;i++){
		if(((n-1)%3!=0)&&(i==t))  k=(n-1)%3;
		else  k=3;
		printf("%d",b[3*(i-1)]);
		for(j=1;j<k;j++){
			printf(" %d",b[3*(i-1)+j]);
		}
		printf("\n");
	}
}
