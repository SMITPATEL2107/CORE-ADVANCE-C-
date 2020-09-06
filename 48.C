	#include<stdio.h>
	#include<conio.h>
	struct employee
	{
	 int no,age;
	 char name[20],add[50];
	};
	void main()
	{
	 struct employee s1;
	 clrscr();
	 printf("enter emp no:");
	 scanf("%d",&s1.no);
	 printf("enter emp name:");
	 scanf("%s",&s1.name);
	 printf("enter emp add:");
	 scanf("%s",&s1.add);
	 printf("enter emp age:");
	 scanf("%d",&s1.age);
	 printf("\nemployee no is :%d",s1.no);
	 printf("\nemployee name is :%s",s1.name);
	 printf("\nemployee add is :%s",s1.add);
	 printf("\nemployee age is :%d",s1.age);
	 getch();
	}