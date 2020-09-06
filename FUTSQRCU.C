	#include<stdio.h>
	#include<conio.h>
	void sqr(int a);
	void cube(int a);
	void main()
	{
	 int a;
	 clrscr();
	 printf("enter a number:");
	 scanf("%d",&a);

	 sqr(a);
	 cube(a);

	 getch();
	}
	void sqr(int a)
	{
	 int sqr;
	 sqr=a*a;
	 printf("\nsquare of %d is: %d",a,sqr);
	}
	void cube(int a)
	{
	 int cube;
	 cube=a*a*a;
	 printf("\ncube of %d is: %d",a,cube);
	}