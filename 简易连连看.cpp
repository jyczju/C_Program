#include<stdio.h>

int main(void){
	static char a[10000][10000];
	char c;
	int i,j,n,m,k,x1,x2,y1,y2,count=0,flag=1;
	
	scanf("%d",&n);
	scanf("%c",&c);
	for(i=1;i<=2*n;i++){
		for(j=1;j<=2*n;j++){
			scanf("%c",&a[i][j]);scanf("%c",&c);
		}
	}

	scanf("%d",&m);
	for(k=1;k<=m;k++){
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		if(a[x1][y1]==a[x2][y2]&&a[x1][y1]!='*'){
			a[x1][y1]='*';
			a[x2][y2]='*';
			for(i=1;i<=2*n;i++){
		        for(j=1;j<=2*n;j++){
		 	         printf("%c ",a[i][j]);
		        }
		        printf("\n");
  	        }
		}
		else{
			printf("Uh-oh\n");
			count++;
		}
		if(count>=3){
			printf("Game Over\n");
			break;
		}
		for(i=1;i<=2*n;i++){
		   for(j=1;j<=2*n;j++){
		 	    if(a[i][j]!=0){
		 	    	flag=0;
		 	    	break;
		 	    }
		   }
  	    }
  	    if(flag==1){
  	    	printf("Congratulations!\n");
  	    	break;
  	    }
	}
} 
