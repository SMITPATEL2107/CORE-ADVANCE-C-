#include<stdio.h>
#include<conio.h>
void main()
{
 int a=10;
 int *ptr;
 clrscr();
 ptr=&a;
 printf("%d",a);
 printf("\n %p",ptr);
 getch();
}