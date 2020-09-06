#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char name[20];
 char lname[20];
 clrscr();
 printf("enter your name and surname");
 gets(name);
 gets(lname);
 strcat(name,lname);
 puts(name);
 getch();
}