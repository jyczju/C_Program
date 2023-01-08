#include<stdio.h>

int main(void)
{
	int a,b;
	char c;
	double price;
	
	scanf("%d %d %c",&a,&b,&c);
	if (c=='m'){
		if (b==90)  price=a*6.95*0.95;
		if (b==93)  price=a*7.44*0.95;
		if (b==97)  price=a*7.93*0.95;
	}
	if (c=='e'){
		if (b==90)  price=a*6.95*0.97;
		if (b==93)  price=a*7.44*0.97;
		if (b==97)  price=a*7.93*0.97;
	}
	printf("%.2lf",price);
	
	return 0;
	
}
