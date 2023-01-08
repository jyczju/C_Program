#include<stdio.h>

int main(void){
	double sum,item;
	int i,n;
	sum=1;
	item=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		item=item/i;
		sum=sum+item;
	}
	printf("%.8lf",sum);
}
