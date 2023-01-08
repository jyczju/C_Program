#include<stdio.h>
#include<math.h>
int main(void){
	int n,i,j,m,flag;
	scanf("%d",&n);
		flag=0;
	for(i=1;i<=n;i++){
		m=pow(2,i)-1;
		for(j=2;j<=sqrt(m);j++){
			if(m%j==0)  break;
		}
		if((j>sqrt(m))&&(m!=1))  {printf("%d\n",m);flag=1;}
	}
	if(flag==0)  printf("None");
	return 0;
}
