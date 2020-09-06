#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char name[20];
 int length;
 clrscr();
 printf("enter your name");
 gets(name);
 length=strlen(name);
 printf("length is:%d\n",length);
 puts(name);
 getch();
}