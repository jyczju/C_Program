#include<stdio.h>

int main(void){
	static int a[20];
	static int b[20];
	static int usame[40];
	int N1,N2,i,j,k,l,flag;
	flag=1;
	k=0;
	scanf("%d",&N1);
	for(i=0;i<N1;i++){
		scanf("%d",&a[i]);}
	scanf("%d",&N2);
	for(j=0;j<N2;j++){
		scanf("%d",&b[j]);}
	for(i=0;i<N1;i++){
		for(j=0;j<N2;j++){
			if(b[j]==a[i])  break;}
		if(j>=N2){
			for(l=0;l<k;l++){
				if(a[i]==usame[l]){
					break;
				}
			}
			if(l>=k){usame[k]=a[i];k++;}
			}
	}
	for(j=0;j<N2;j++){
		for(i=0;i<N1;i++){
			if(b[j]==a[i])  break;}
		if(i>=N1){
			for(l=0;l<k;l++){
				if(b[j]==usame[l]){
					break;
				}
			}
			if(l>=k){usame[k]=b[j];k++;}
			}
	}
	
	printf("%d",usame[0]);
	for(l=1;l<k;l++){
		printf(" %d",usame[l]);
	}
}
