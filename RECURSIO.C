	#include<stdio.h>
	#include<conio.h>
	int fact(int n)
	{
	 if(n<=1)
	 return 1;
	 return n*fact(n-1);
	}
	void main()
	{
	 int x=5;
	 clrscr();
	 printf("fact of %d is: %d",x,fact(x));
	 getch();
	}