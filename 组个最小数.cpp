#include<stdio.h>

int main(void){
	static int count[10],a[100],b[100];
	int i,j,k=0;
	for(i=0;i<=9;i++){
		scanf("%d",&count[i]);}
	for(i=0;i<+9;i++){
		if(count[i]!=0){
			for(j=0;j<count[i];j++){
				a[k]=i;k++;
			}
		}
	}
	if(a[0]==0){
		a[0]=a[count[0]];a[count[0]]=0;
	}
	for(i=0;i<count[0]+count[1]+count[2]+count[3]+count[4]+count[5]+count[6]+count[7]+count[8]+count[9];i++){
		printf("%d",a[i]);
	}
}
