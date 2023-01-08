#include<stdio.h>
#include<string.h> 
int main(void){
	char a[100];
	int i,n;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		if(a[i]>='A'&&a[i]<='Z'){
			a[i]='Z'-a[i]+'A';
		}
	}
	puts(a);
}
