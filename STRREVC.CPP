#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char name[20];
 clrscr();
 printf("enter your name");
 gets(name);
 strrev(name);
 puts(name);
 getch();
}