#include<stdio.h>
#include<conio.h>
void getdata();
void display();
struct student
{
  int rno;
  char name[20];
  int per;
}s1;
void main()
{
 clrscr();
 getdata();
 display();
 getch();
 }
void getdata()
{
 printf("enter r no:");
 scanf("%d",&s1.rno);
 printf("\nenter name:");
 scanf("%s",s1.name);
 printf("\nenter per:");
 scanf("%d",&s1.per);
 }
 void display()
 {
 printf("rno:%d,name:%s,per:%d",s1.rno,s1.name,s1.per);
 }