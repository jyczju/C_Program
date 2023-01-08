#include<stdio.h>

int main(void){
	static int a[1000];
	static int count[10];
	int N,i,t,max;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);}
	for(i=0;i<N;i++){
		if(a[i]==0)  count[0]++;
		while(a[i]!=0){
			t=a[i]%10;
			count[t]++;
			a[i]=a[i]/10;}
	}
	max=a[i];
	for(i=0;i<10;i++){
		if(count[i]>max){
			max=count[i];
		}
	}
	printf("%d:",max);
	for(i=0;i<10;i++){
		if(count[i]==max)  printf(" %d",i);
	}
}
