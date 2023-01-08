#include <stdio.h> 
int fun1(int m); 
int main(void)
{   int n;
    scanf("%d", &n);
    while (n > 0) {
        if(fun1(n)) 
            printf("%d中各位数字按从小到大排列\n", n);
        scanf("%d", &n);
    }
}
int fun1(int m)
{   int k;

    k=m%10;    
    while(m) 
        if( m / 10 % 10 > k) 
		return 0; 
        else {
		m=m/10;
		k = m % 10;
	}
    return 1;
 }

