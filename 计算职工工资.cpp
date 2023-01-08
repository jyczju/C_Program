#include<stdio.h>

struct inf{
	char name[20];
	double x;
	double y;
	double output;
	double input;
};

int main(void){
	int N,i;
	struct inf message[10000];
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%s %lf %lf %lf",message[i].name,&message[i].x,&message[i].y,&message[i].output);
		message[i].input=message[i].x+message[i].y-message[i].output;
	}
	for(i=0;i<N;i++){
	    printf("%s %.2lf\n",message[i].name,message[i].input);
	} 
}

