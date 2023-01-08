#include<stdio.h>
int main(void){
    double pi,sum,item,eps,i;
    sum=1;item=1;i=1;

    scanf("%le",&eps);
    while(item>=eps){
        item=item*i/(2*i+1);
        sum=sum+item;
        i++;
    }
    pi=2*sum;
    printf("PI = %.5lf",pi);
    return 0;
}
