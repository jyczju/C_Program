#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double funcos( double e, double x ){
	double result,item,i,flag;
	flag=1.0;
	result=0;
	item=1;
	i=1;
	while(item>=e){
		result=result+flag*item;
		flag=-flag;
		item=item*x*x/i/(i+1);
		i=i+2;
	}
	result=result+item;
	return result;
}
