#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
	
int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int factorsum( int number ){
	int i,sum;
	sum=1;
	for(i=2;i<number;i++){
		if(number%i==0)   sum=sum+i;}
	return sum;
}

void PrintPN( int m, int n ){
	int i,flag,j;
	flag=0;
	for(i=m;i<=n;i++){
		if(factorsum(i)==i){
			flag=1;
			printf("%d = 1",i);
			for(j=2;j<i;j++){
				if(i%j==0)  printf(" + %d",j);
			}
			printf("\n");
		}
	}
	if (flag==0)  printf("None");
}
