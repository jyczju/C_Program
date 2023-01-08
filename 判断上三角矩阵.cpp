#include<stdio.h>

int main(void){
	int T,n,k,i,j,flag=1;
	static int a[10][10];
	scanf("%d",&T);
	for(k=1;k<=T;k++){
		scanf("%d",&n);
		for(i=0;i<n;i++){
		    for(j=0;j<n;j++){
			   scanf("%d",&a[i][j]);}
	    }
	    for(i=0;i<n;i++){
		    for(j=0;j<=i-1;j++){
		    	if(a[i][j]!=0)  flag=0;
			}
	    }
	    if(flag==1)  printf("YES\n");
	    else  printf("NO\n");
	    flag=1;
	}
}
