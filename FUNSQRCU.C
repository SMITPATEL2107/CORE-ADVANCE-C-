	#include<stdio.h>
	#include<conio.h>
	void sqr();
	void cube();
	void main()
	{
	 int a;
	 clrscr();

	 sqr();
	 cube();

	 getch();
	}

	void sqr()
	{
	int sqr,a;
	printf("enter a number");
	 scanf("%d",&a);
	 sqr=a*a;
	 printf("\nsquare of %d is: %d",a,sqr);
	}
	void cube()
	{
	int a,cube;
	printf("\nenter a number");
	 scanf("%d",&a);
	 cube=a*a*a;
	 printf("\ncube of %d is: %d",a,cube);
	}