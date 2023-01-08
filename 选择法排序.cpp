#include<stdio.h>

int main(void){
	static int a[10];
	int n,i,j,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				m=a[i];a[i]=a[j];a[j]=m;
			}
		}
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++){
		printf(" %d",a[i]);
	}
}

