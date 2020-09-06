	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int a,b,t;
	 clrscr();
	 a=10;
	 b=5;
	 printf("a=%d,b=%d",a,b);
	 t=a;
	 a=b;
	 b=t;
	 printf("\na=%d,b=%d",a,b);
	 getch();
	}