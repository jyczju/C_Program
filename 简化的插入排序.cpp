#include<stdio.h>

int main(void){
	static int a[15];
	int N,X,i,j;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);}
	scanf("%d",&X);
	if(X<a[0]) {
		if(N==1) {a[1]=a[0];a[0]=X;}
		else{for(j=N-1;j>=0;j--){
				a[j+1]=a[j];
			}
			a[0]=X;
		}}
	else if(X>a[N-1]){
		a[N]=X;
	}
	else{
	for(i=0;i<N;i++){
		if((a[i]<=X)&&(a[i+1]>=X)){
			for(j=N-1;j>=i+1;j--){
				a[j+1]=a[j];
			}
			a[i+1]=X;
			break;
		}
	}}
	for(i=0;i<=N;i++){
		printf("%d ",a[i]);}
}
