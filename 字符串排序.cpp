#include<stdio.h>
#include<string.h>
int main(void){
	char a[1000][80];
	char c[80];
	char max[80];
	int n,maxlen;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	maxlen=strlen(a[0]);
	strcpy(max,a[0]);
	for(i=0;i<n;i++){
			if(strlen(a[i])>maxlen){
				strcpy(max,a[i]);maxlen=strlen(a[i]);
			}
	}
	printf("The longest is: %s",max);
}
