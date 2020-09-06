	#include<stdio.h>
	#include<conio.h>
	int add(int a,int b);
	void main()
	{
	 int a,b,sum;
	 a=10,b=12;
	 clrscr();
	 sum=add(a,b);
	 printf("%d",sum);
	 getch();
	}
	int add(int a,int b)
	{
	       int sum;
	       sum=a+b;
	       return sum;
	}