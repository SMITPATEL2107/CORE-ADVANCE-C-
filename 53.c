#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[15],str2[15];
	char *s1=str1;
	char *s2=str2;
	printf("enter 1st string:");
	gets(str1);
	printf("enter 2nd strind:");
	gets(str2);
	while(*(++s1));
	while(*(s1++)=*(s2++));
	printf("concated string:%s",str1);
	getch();
}
