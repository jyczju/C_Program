#include<stdio.h>

int main(void){
	int year,mouth,day,k,leap;
	int tab[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	
	scanf("%d/%d/%d",&year,&mouth,&day);
	leap=((year%4==0)&&(year%100!=0)||(year%400==0));
	
	for(k=1;k<=mouth-1;k++){
		day=day+tab[leap][k];
	}
	printf("%d",day);
}
