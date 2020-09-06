#include<stdio.h>
#include<conio.h>
void rev(char *str)
{
	if(*str)
	{
		rev(str+1);
		printf("%c",*str);
	}
}
void main()
{
	char a[20];
	printf("enter string:");
	scanf("%s",a);
	rev(a);
}
