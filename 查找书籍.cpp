#include<stdio.h>

struct book{
	char name[40];
	double price;
}; 
 int main(void){
 	struct book bo[10];
 	int i,n,max,min;
 	scanf("%d",&n);gets(bo[0].name);
 	for(i=0;i<n;i++){
 		gets(bo[i].name);
 		if(i==n-1)  scanf("%lf",&bo[i].price);
 		else  scanf("%lf\n",&bo[i].price);
 	}
 	max=0;min=0;
 	for(i=1;i<n;i++){
 		if(bo[i].price>bo[max].price){
 			max=i;
 		}
 		if(bo[i].price<bo[min].price){
 			min=i;
 		}
 	}
 	printf("%.2lf, %s\n",bo[max].price,bo[max].name);
 	printf("%.2lf, %s\n",bo[min].price,bo[min].name);
 }
