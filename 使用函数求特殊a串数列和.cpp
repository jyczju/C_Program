#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );
	
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));		
    printf("s = %d\n", SumA(a,n));	
	
    return 0;
}

int fn( int a, int n ){
      int t,sum,i;
      t=1;
      sum=0;
	  for(i=1;i<=n;i++){
	  	sum=sum+a*t;
	  	t=t*10;
	  }
	  return sum;
   } 
   
int SumA( int a, int n ){
	int sum,i;
	sum=0;
	for(i=1;i<=n;i++){
		sum=sum+fn(a,i);
	}
	return sum;
}
