#include<stdio.h>

int main(void){
	static int a[10];
	int n,i,j,m,k,max,min,imin,imax;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	min=a[0];imin=0;
	max=a[n-1];imax=n-1;
	for(i=0;i<=n-1;i++){
	    if(a[i]<min)   {imin=i;min=a[i];}
        if(a[i]>max)   {imax=i;max=a[i];}
	}
	if(imax==0) {m=a[0];a[0]=a[imin];a[imin]=m;
	imax=imin;
	k=a[n-1];a[n-1]=a[imax];a[imax]=k;}
	else{

	m=a[0];a[0]=a[imin];a[imin]=m;
	k=a[n-1];a[n-1]=a[imax];a[imax]=k;	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

