	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int a,b,n;
	 clrscr();
	 printf("enter a number");
	 scanf("%d",&n);
	 b=0;
	 while(n>0)
	 {
	  a=n%10;
	  n=n/10;
	  b=b+a;
	 }
	 printf("summation of given number is:%d",b);
	 getch();
	}