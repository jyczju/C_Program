#include<stdio.h>

int main(void)
{
	int letter,blank,digit,other,i;
	char ch;
	
	letter=blank=digit=other=0;
	for(i=1;i<=10;i++)
	{
		ch=getchar();
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		    letter++;
		else if (ch=='\n'||ch==' ')
		    blank++;
		else if (ch>='0'&&ch<='9')
		    digit++;
		else
		    other++;
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
	
	return 0;
}
