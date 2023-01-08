#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib( int n ){
	int i,a,b,c;
	a=b=1;
	if((n==1)||(n==2)) return 1;
	else {
	for(i=3;i<=n;i++){
		c=b+a;
		a=b;
		b=c;
	}
	return b;}
}

void PrintFN( int m, int n ){
	int i,flag,t;
	flag=0;
	if((m==1)&&(n==1))  printf("1 1");
	else{
	for(i=1;i<=n;i++){
		if ((fib(i)>=m)&&(fib(i)<=n)){
			t=i;
			flag=1;
			break;
		}
	}
	if(flag==1) printf("%d",fib(t));
	for(i=t+1;i<=n;i++){
		if ((fib(i)>=m)&&(fib(i)<=n)){
		printf(" %d",fib(i));
		flag=1;
	}}
	if(flag==0)  printf("No Fibonacci number");}
}
