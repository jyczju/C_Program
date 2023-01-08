#include<stdio.h>
#include<math.h> 
int main(void){
	double x,y;
	scanf("%lf",&x);
	if(x>0){
		y=sin(x)+x;
	}
	else if(x<0){
		y=cos(x)-x;
	}
	else y=0;
	printf("%.3lf",y);
}
