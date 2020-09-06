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
 struct student s1[3];
 int i;
 clrscr();
 for(i=0;i<3;i++)
 {
 printf("\nenter r no:");
 scanf("%d",&s1[i].rno);
 printf("\nenter name:");
 scanf("%s",s1[i].name);
 printf("\nenter per:");
 scanf("%d",&s1[i].per);
 printf("rno:%d,name:%s,per:%d",s1[i].rno,s1[i].name,s1[i].per);
 }
 getch();

}