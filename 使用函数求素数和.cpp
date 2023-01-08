#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime( int p ){
     int i,flag;
     flag=0;
     if (p<=0)  flag=0;
	 else {for(i=2;i<=sqrt(p);i++) {
	 	if (p%i==0)   break;}
	 	if((i>sqrt(p))&&(p!=1))  flag=1;} 
		return flag;
}

int PrimeSum( int m, int n ){
     int p,sum; 
     sum=0; 
	 for( p=m; p<=n; p++ ){
	 	if (prime(p)==1)  sum=sum+p;
	    
	 }return sum;
	 } 
