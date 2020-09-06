	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int a=40,b=20,*p,*q;
	 clrscr();
	 printf("before swap a=%d & b=%d",a,b);
	 a=a+b;
	 b=a-b;
	 a=a-b;
	 p=&a;
	 q=&b;
	 printf("\nafter swaping");
	 printf("\na=%d",*p);
	 printf("\nb=%d",*q);
	 getch();
	}
