#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number ){
	int sum,m,count,t,tnumber,item,i;
	tnumber=number;
	sum=0;
	count=0;
	while(tnumber){
		tnumber=tnumber/10;
		count++;}
	tnumber=number;
	while(tnumber){
		t=tnumber%10;
		for(item=1,i=1;i<=count;i++)
		     item=item*t;
		sum=sum+item;
		tnumber=tnumber/10;}
	if(number==sum)  return 1;
	   else return 0;
}

void PrintN( int m, int n ){
	int i;
	for(i=m+1;i<n;i++){
		if(narcissistic(i)==1)  printf("%d\n",i);
	}
}
