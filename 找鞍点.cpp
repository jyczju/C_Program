#include<stdio.h>

int main(void){
	static int a[6][6];
	static int max[6];
	static int min[6];
	int n,i,j,max1,min1,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	/*寻找每一行最大的数*/
	for(i=0;i<n;i++){
		max1=a[i][0];
		for(j=0;j<n;j++){
			if(a[i][j]>max1){
				max1=a[i][j];
			}
		}
		max[i]=max1;
	}
	/*寻找每一列最小的数*/
	for(j=0;j<n;j++){
		min1=a[0][j];
		for(i=0;i<n;i++){
			if(a[i][j]<min1){
				min1=a[i][j];
			}
		}
		min[j]=min1;
	} 
	/*判断最大最小是否有重合*/
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(max[i]==min[j]){
				flag=1;
				printf("%d %d",i,j);
				break;
			}
		}
		if(max[i]==min[j]) break;
	} 
	if(flag==0)  printf("NONE");
}
