#include<stdio.h>
#include<string.h>

struct friends{
	char name[11];
	char birth[9];
	char num[18];
};

int main(void){
	int n,i,j;
	struct friends fri[11];
	struct friends temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %s %s",fri[i].name,fri[i].birth,fri[i].num);
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(strcmp(fri[j].birth,fri[i].birth)<0){
				temp=fri[j];fri[j]=fri[i];fri[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s %s %s\n",fri[i].name,fri[i].birth,fri[i].num);
	}
}
