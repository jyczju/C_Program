#include<stdio.h>
#include<string.h>
int main (void){
	char op,a[1000];
	int i,index=-1,n;
	scanf("%c",&op);
	scanf("%s",a);
	n=strlen(a);
	for(i=n-1;i>=0;i--){
		if(a[i]==op){
			index=i;break;
		}
	}
	if(index==-1)  printf("Not Found");
	else printf("index = %d",index);
} 
