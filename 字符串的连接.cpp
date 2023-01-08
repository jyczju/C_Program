#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t );

int main()
{
    char *p;
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};

    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);

    return 0;
}

/* 你的代码将被嵌在这里 */

char *str_cat( char *s, char *t ){
	char a[100],b[100];
	char *s1,*s2,*t1;
	int i=0;
	s1=s2=s;t1=t;
	while(*s1!='\0'){
		a[i]=*s1;
		s1++;
		i++;
	}
	a[i]='\0';
	i=0;
	while(*t1!='\0'){
		b[i]=*t1;
		t1++;
		i++;
	}
	b[i]='\0';
	strcat(a,b);
	i=0;
	while(a[i]!='\0'){
		*s2=a[i];
		s2++;
		i++;
	}
	*s2='\0';
	return s;
} 
