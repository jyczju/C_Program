#include<stdio.h> 

struct student{
	char num[6];
	char name[11];
	int score1;
	int score2;
	int score3;
	int score;
};

int main(void){
	int N,i,max;
	struct student stu[10];
	scanf("%d\n",&N);
	for(i=0;i<N;i++){
		scanf("%s %s %d %d %d",stu[i].num,stu[i].name,&stu[i].score1,&stu[i].score2,&stu[i].score3);
		stu[i].score=stu[i].score1+stu[i].score2+stu[i].score3;
	}
	max=0;
	for(i=1;i<N;i++){
		if(stu[i].score>stu[max].score){
			max=i;
		}
	}
	printf("%s %s %d",stu[max].name,stu[max].num,stu[max].score);
}
