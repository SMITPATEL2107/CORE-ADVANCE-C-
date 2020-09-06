	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int i,a=0,b=1,n,t;
	 clrscr();
	 printf("enter a number");
	 scanf("%d",&n);
	 printf("fibonacci series is:");
	 for(i=1;i<=n;i++)
	 {
	  printf("'%d",a);
	  t=a+b;
	  a=b;
	  b=t;
	 }
	 getch();
	}
