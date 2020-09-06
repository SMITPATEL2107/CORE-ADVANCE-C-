	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int n,i,t,a=0,b=1;
	 clrscr();
	 printf("enter a number for series");
	 scanf("%d",&n);
	 printf("fibbonacci series is:");
	 for(i=1;i<=n;i++)
	 {
	  printf("%d,",a);
	  t=a+b;
	  a=b;
	  b=t;
	 }
	 getch();
	}