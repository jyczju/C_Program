#include <stdio.h>
#define MAXS 20

void f( char *p );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    f(s);
    printf("%s\n", s);

    return 0;
}
void ReadString( char s[] ){
	gets(s);
}
/* 你的代码将被嵌在这里 */

void f( char *p ){
	char c;
	char *p1,*p2; 
	int i,count=0;
	p1=p2=p;
	while(*p1!='\0'){
		count++;
		p1++;
	}
	for(i=1;i<=count/2;i++){
		c=*(p2+i-1);*(p2+i-1)=*(p2+count-i);*(p2+count-i)=c;
	}
}
