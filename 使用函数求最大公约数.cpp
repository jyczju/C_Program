#include <stdio.h>

int gcd( int x, int y );

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}

gcd( int x, int y ){
	int i;
	if ((x==1)||(y==1))   return 1;
	else{
	    for(i=x;i>=2;i--){
		if((x%i==0)&&(y%i==0))    return i;
	}
	}
	
}
