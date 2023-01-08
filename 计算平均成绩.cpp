#include<stdio.h>

struct student{
    char num[6];
    char name[20];
    int score;
};

int main(void){
	int i,N,sum=0;
	double ave;
	struct student stu[1000];
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%s %s %d",stu[i].num,stu[i].name,&stu[i].score);
	}
	for(i=0;i<N;i++){
		sum=sum+stu[i].score;
	}
	ave=sum/N;
	printf("%.2lf\n",ave);
	for(i=0;i<N;i++){
		if(stu[i].score<ave){
			printf("%s %s\n",stu[i].name,stu[i].num);
		}
	}
}
