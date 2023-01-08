#include<stdio.h>

int main(void){
	static char a[80];
    static char b[80];
    int i=0,n,k;
    while((a[i]=getchar())!='\n'){
		i++;}
	for(k=0;k<=i-1;k++){
		b[k]=a[i-1-k];}
	printf("%s",b);
}
