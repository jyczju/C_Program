#include<stdio.h>
#include<string.h> 
int main(void){
	char op[100],a[100],b[100],c[100];
	int n,i,j,flag,k=1,t;
	char temp;
	gets(op);
	strcpy(a,op);
	strcpy(b,op);
	n=strlen(op);
	c[0]=a[0];
	for(i=1;i<n;i++){
		flag=1;
		for(j=0;j<i;j++){
			if(a[i]==b[j]){flag=0;break;}
		}	
		if(flag==1){
			c[k]=a[i];k++;
		}	
	}
	c[k]='\0';
	t=strlen(c);
	for(i=0;i<t;i++){
		for(j=i;j<t;j++){
			if(c[j]<c[i]){
				temp=c[j];c[j]=c[i];c[i]=temp;
			}
		}
	}
	puts(c);
}
