	#include<stdio.h>
	#include<conio.h>
	void add();
	void main()
	{
	 clrscr();
	 add();
	 getch();
	}
	void add()
	{
	 int a=15,b=10,sum;
	 sum=a+b;
	 printf("sum of %d & %d is: %d",a,b,sum);
	}
