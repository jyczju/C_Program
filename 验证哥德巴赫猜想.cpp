#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

int prime( int p ){
     int i,flag;
     flag=0;
	 for(i=2;i<=sqrt(p);i++) {
	 	if (p%i==0)   break;}
	 	if((i>=sqrt(p))&&(p!=1))  flag=1;
	 	return flag;} 
	 	
void Goldbach( int n ){
	int i,a,x,y;
	for(a=2;a<=n/2;a++){
		for(i=2;i<=a/2;i++){
			if(a%i==0)  break;}
		if(i>a/2)  x=a;
		else x=0;
		for(i=2;i<=(n-a)/2;i++){
			if((n-a)%i==0)  break;}
		if((i>(n-a)/2)&&(n-a)!=1)  y=n-a;
		else y=0;
		if(x+y==n)   break;
	}
	printf("%d=%d+%d",n,x,y);
}
