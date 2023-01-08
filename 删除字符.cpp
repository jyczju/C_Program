#include <stdio.h>
#include <string.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

void ReadString( char s[] ){
	gets(s);
}

/* 你的代码将被嵌在这里 */

void delchar( char *str, char c ){
	char a[200],*str1,*str2;
	int i=0;
	str1=str;
    str2=str;
	while(*str1!='\0'){
		a[i]=*str1;
		str1++;
		i++;
	}
	a[i]='\0';
	for(i=0;a[i]!='\0';i++){
		if(a[i]==c)  continue;
		*str2=a[i];
		str2++;
	}
	*str2='\0';
}
