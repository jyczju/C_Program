#include<stdio.h>

int main(void)
{
	int a,n,i,item,sum;
	
	scanf("%d",&a);
	scanf("%d",&n);
	item=0;
	sum=0;
	for(i=1;i<=n;i++){
		item=item*10+a;
		sum=sum+item;
	}
	printf("s = %d",sum);
	return 0;
}
