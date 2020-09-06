#include<stdio.h>
#include<conio.h>
void main()
{
	int i,element[5];
	clrscr();
	for(i=0;i<5;i++)
	{
	 printf("\nenter element");
	 scanf("%d",&element[i]);
	 printf("\nvalue is:%d",element[i]);
	 }
	 getch();
}