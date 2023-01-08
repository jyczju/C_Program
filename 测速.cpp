#include<stdio.h>

int main(void)
{
	double speed,limit,x,c;
	
	scanf("%lf %lf",&speed,&limit);
	c=(speed-limit)/limit;
	if (c<0.1)
	    printf("OK");
	else if ((speed>=1.1*limit)&&(speed<1.5*limit)){
		x=100*(speed/limit-1.0);
		printf("Exceed %.0lf%%. Ticket 200",x);}
	else {
	    x=100*(speed/limit-1.0);
	    printf("Exceed %.0lf%%. License Revoked",x);}
	    
	return 0;
}
