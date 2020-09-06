#include<stdio.h>
#include<conio.h>
void main()
{
 int i;
 clrscr();
 for(i=100;i>80;i--)
 { if(i==86)
 continue;
   printf("\n%d",i);

 }
 getch();
}