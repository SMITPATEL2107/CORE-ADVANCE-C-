#include<stdio.h>
#include<conio.h>
void main()
{
	str();
	getch();
}
void str()
{
	char a[20];
	printf("enter string");
	scanf("%s",a);
	printf("\nrev string:%s",strrev(a));
}
