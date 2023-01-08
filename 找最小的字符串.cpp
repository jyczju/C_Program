#include<stdio.h>
#include<string.h> 
int main(void){
	char a[80],b[80],min[80];
	int i,n,N,j;
	scanf("%d\n",&N);
	scanf("%s",a);
	strcpy(min,a);
	for(i=2;i<=N;i++){
		scanf("%s",b);
		if(strcmp(b,min)<0){
			n=strlen(b);
			for(j=0;j<=n;j++){
				min[j]=b[j]; 
			}
		}
		strcpy(a,b);
	}
	printf("Min is: %s",min);
}
