#include<stdio.h>

int main(void){
	static char op[30];
	int i=0,k,j;
	while((op[i]=getchar())!='#'){
		i++;}
	for(k=0;k<=i-1;k++){
		if(op[k]>='a'&&op[k]<='z'){
			op[k]=op[k]-'a'+'A';}
		else if(op[k]>='A'&&op[k]<='Z'){
			op[k]=op[k]-'A'+'a';}
		else;
	}
	for(j=0;j<=i-1;j++){
		printf("%c",op[j]);
	}
} 
