#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char name[20];
 char lname[20];
 int cmp;
 clrscr();
 printf("enter your name and surname");
 gets(name);
 gets(lname);
 cmp=strcmp(name,lname);
 //puts(name);
 printf("%d",cmp);
 getch();
}