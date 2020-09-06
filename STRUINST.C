#include<stdio.h>
#include<conio.h>
struct dob
{
int date;
int month;
int year;
};
struct student
{
  int rno;
  char name[20];
  int per;
  struct dob d;
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
 printf("\nenter date of birth(dd-mm-yyyy):");
 scanf("%d %d %d",&s1.d.date,&s1.d.month,&s1.d.year);

 printf("rno:%d,name:%s,per:%d",s1.rno,s1.name,s1.per);
 printf("dob is:%d-%d-%d",s1.d.date,s1.d.month,s1.d.year);
 getch();

}