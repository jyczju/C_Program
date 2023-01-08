#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */

void strmcpy( char *t, int m, char *s ){
	int count1=0,i;
	char *t1,*s1;
	t1=t;
	s1=s;
	while(*t1!='\0'){
		count1++;
		t1++;
	}
	if(m>count1) {
		while(*s!='\0'){
			*s='\0';
			s++;
		}
	}
	else for(i=m;i<count1;i++){
		*s1=*(t+i-1);
		s1++;
	}
	*s1='\0';
}
