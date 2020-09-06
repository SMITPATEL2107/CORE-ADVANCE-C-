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
 struct student s1={1,"aakash",70};
 printf("%d",s1.rno);
 printf("%s",s1.name);
 printf("%d",s1.per);
 getch();

}