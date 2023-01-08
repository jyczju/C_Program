#include<stdio.h>

int main(void){
	static int a[1000];
	static int b[1000];
	static int count[1000];
	int n,i,j,max,imax;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(b[j]==a[i]){
				count[i]++;
			}
		}
	}
	/*求count[i]的最大值*/
	max=count[0];
	imax=0;
	for(i=0;i<n;i++) {
		if(count[i]>max)   {max=count[i];imax=i;} 
	}
	
	printf("%d %d",a[imax],count[imax]);
}
