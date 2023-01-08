#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int CountDigit( int number, int digit ){
	int t,count;
	count=0;
	if(number==0){
		if(digit==0)  return 1;
		else return 0;}
	if(number<0)  number=-number;	
	while(number){
		t=number%10;
		number=number/10;
		if(t==digit)  count++;
	}
	return count;}

