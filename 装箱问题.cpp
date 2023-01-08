#include<stdio.h>

int main(void){
	static int s[100],box[100],index[100];
	int i,n,j,max;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(box[j]+s[i]<=100){
				box[j]=box[j]+s[i];
				index[i]=j+1;
				break;
			}
		}
	}
	max=index[0];
	for(i=0;i<n;i++){
		if(index[i]>max){
			max=index[i];
		}
	}
	for(i=0;i<n;i++){
		printf("%d %d\n",s[i],index[i]);
	}
	printf("%d",max);
} 
