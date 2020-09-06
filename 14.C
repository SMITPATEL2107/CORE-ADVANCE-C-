#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,max=0;
 clrscr();
 printf("enter 3 numbers");
 scanf("%d%d%d",&a,&b,&c);
 max= (a>b)?((a>c)?a:c):((b>c)?b:c);
 printf("\nmax number is:%d",max);
 getch();
}