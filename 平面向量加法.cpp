#include<stdio.h>

int main(void){
	double x1,x2,x,y1,y2,y;
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	x=x1+x2;
	y=y1+y2;
	if(x>-0.05&&x<0)  x=0.01;
	if(y>-0.05&&y<0)  y=0.01;
	printf("(%.1lf, %.1lf)",x,y);
}
