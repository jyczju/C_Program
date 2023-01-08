#include<stdio.h>
double pow(int n);
int main(void)
{
	int h,n;
	double x,y;
	scanf("%d",&h);
	scanf("%d",&n);
	if(n<=0)  printf("0.0 0.0");
	else{
	x=h+2*h*(1-pow(n-1));
	y=h*pow(n);
	printf("%.1lf %.1lf",x,y);
	return 0;} 
}
double pow(int n)
{
	int i;
	double result=1.0;
	for(i=1;i<=n;i++){
		result=result*0.5;
	}
	return result;
}
