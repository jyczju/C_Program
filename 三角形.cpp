#include<stdio.h>
#include<math.h>
int main(void)
{
	double area,perimeter,t,s,a,b,c;
	
	scanf("%lf %lf %lf",&a,&b,&c);
	if ((a+b>c)&&(b+c>a)&&(a+c>b)){
		perimeter=a+b+c;
		s=(a+b+c)/2.0;
		t=s*(s-a)*(s-b)*(s-c);
		area=sqrt(t);
		printf("area = %.2lf; perimeter = %.2lf",area,perimeter);
	}
	else  printf("These sides do not correspond to a valid triangle");
	
	return 0;    
}
