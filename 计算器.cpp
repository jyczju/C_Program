#include<stdio.h>

int main(void)
{   int a,b,t;
    char op;
    
    scanf("%d %c %d",&a,&op,&b);
    if (op=='+')
        {t=a+b;printf("%d",t);} 
    else if (op=='-') 
        {t=a-b;printf("%d",t);} 
    else if (op=='*')
        {t=a*b;printf("%d",t);}
    else if (op=='/')
        {t=a/b;printf("%d",t);}
    else if (op=='%')
	    {t=a%b;printf("%d",t);}
	else  printf("ERROR");
        
	return 0;   
}

