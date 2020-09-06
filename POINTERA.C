#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3]={10,12,14},i;
 int *ptr;
 clrscr();
 ptr=&a;
 for(i=0;i<3;i++)
 {
 printf("\n%d",a[i]);
 printf("\n %p",ptr);
 ptr++;
 }
 getch();
}