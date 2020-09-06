	#include<stdio.h>
	#include<conio.h>
	int add(int a,int b);
	void main()
	{
	 int a,b,sum;
	 a=10,b=12;
	 clrscr();
	 sum=add();
	 printf("%d",sum);
	 getch();
	}
	int add(int a,int b)
	{
	       int a,b,sum;
	       a=10,b=12;
	       sum=a+b;
	       return sum;
	}