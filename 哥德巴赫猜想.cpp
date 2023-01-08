#include<stdio.h>
#include<math.h>
int main(void){
	int i,n,a,x,y;
	scanf("%d",&n);
	for(a=2;a<=n/2;a++){
		for(i=2;i<=sqrt(a);i++){
			if(a%i==0)  break;}
		if(i>sqrt(a))  x=a;
		else x=0;
		for(i=2;i<=sqrt(n-a);i++){
			if((n-a)%i==0)  break;}
		if((i>sqrt(n-a))&&(n-a)!=1)  y=n-a;
		else y=0;
		if(x+y==n)   break;
	}
	printf("%d = %d + %d",n,x,y);
	return 0;
}
