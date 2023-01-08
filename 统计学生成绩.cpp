#include<stdio.h>

int main(void)
{
	int N,A,B,C,D,E,grade,i;
	
	scanf("%d",&N);
	A=B=C=D=E=0;
	for(i=1;i<=N;i++){
		scanf("%d",&grade);
		if (grade>=90)
		   A++;
		else if (grade>=80)
		   B++;
		else if (grade>=70)
		   C++;
		else if (grade>=60)
		   D++;
		else 
		   E++;
	}
	printf("%d %d %d %d %d",A,B,C,D,E);
	
	return 0;
}
