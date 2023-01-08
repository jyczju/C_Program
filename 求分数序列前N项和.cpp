#include<stdio.h>

int main(void){
	double p,q,item,sum,c;
	int N,i;
	p=2;
	q=1;
	sum=p/q;
	scanf("%d",&N);
	for(i=1;i<=N-1;i++){
		c=p+q;
		q=p;
		p=c;
		item=p/q;
		sum=sum+item;
	}
	printf("%.2lf",sum);
}
