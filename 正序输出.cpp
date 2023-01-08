#include<stdio.h>

int main(void){
	int repeat,number,i,digit,temp,pow;
	scanf("%d",&repeat);
	for(i=1;i<=repeat;i++){
		scanf("%d",&number);
		if(number<0)  number=-number;
		pow=1;
		temp=number;
		while(temp!=0){
          temp=temp/10;
          pow=pow*10;}
        pow=pow/10;
        while(pow>1){
          digit=number/pow;
          number=number%pow;
          pow=pow/10;
          printf("%-2d",digit);}
        printf("%d\n",number); 
		
	}
	return 0;
}
