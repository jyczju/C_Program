#include<stdio.h>
#include<string.h> 
int main(void){
	char a[100];
	int i,n,sum=0,item,t=1;

	gets(a);
	n=strlen(a);
	for(i=n-1;i>=0;i--){
		if(a[i]>='1'&&a[i]<='9'){
			item=a[i]-'1'+1;
			sum=sum+t*item;
			t=t*10;
		}
	}
	printf("%d",sum);
}
