#include<stdio.h>
#include<string.h>
int main(void){
	char a[81],b[81],c[162];
	int i,j,al,bl;
	gets(a);gets(b);
	al=strlen(a);bl=strlen(b);
	if(al==bl){
		j=0;
		for(i=0;i<al;i++){
			c[j]=a[i];j++;
			c[j]=b[i];j++;
		}
		c[j]='\0';
	}
	else if(al<bl){
		j=0;
		for(i=0;i<al;i++){
			c[j]=a[i];j++;
			c[j]=b[i];j++;
		}
		for(i=al;i<bl;i++){
			c[j]=b[i];j++;
		}
		c[j]='\0';
	}
	else{
		j=0;
		for(i=0;i<bl;i++){
			c[j]=a[i];j++;
			c[j]=b[i];j++;
		}
		for(i=bl;i<al;i++){
			c[j]=a[i];j++;
		}
		c[j]='\0';
	}
	printf("%s",c);
} 
