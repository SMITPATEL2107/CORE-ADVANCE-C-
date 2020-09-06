#include<stdio.h>
#include<conio.h>
struct student
{
  int rno;
  char name[20];
  int per;
};
void main()
{
 struct student s1;
 clrscr();
 printf("enter r no:");
 scanf("%d",&s1.rno);
 printf("\nenter name:");
 scanf("%s",s1.name);
 printf("\nenter per:");
 scanf("%d",&s1.per);
 printf("rno:%d,name:%s,per:%d",s1.rno,s1.name,s1.per);
 getch();

}