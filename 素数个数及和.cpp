#include<stdio.h> 

int main(void){
	int M,N,i,j,sum,count;
	
	count=0;
	sum=0;
	scanf("%d %d",&M,&N);
	for(i=M;i<=N;i++){
		for(j=2;j<=i/2;j++){
			if(i%j==0)  break;
		}
		if ((j>i/2)&&(i!=1))  {count++;sum=sum+i;}
	}
	printf("%d %d",count,sum);
	
	return 0;
} 
