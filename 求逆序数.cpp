#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

int reverse( int number ){
    int flag,m,t,sum;
    flag=1;
    t=1;
    sum=0;
	if (number<0){
		number=-number;
		flag=-1;}
	m=number;
	while(m!=0){
		m=m/10;
		t=t*10;}
	t=t/10;
	m=number;
	while(m!=0){
		sum=sum+m%10*t;
		t=t/10;
		m=m/10;}
	sum=flag*sum;
	
	return sum;
} 
