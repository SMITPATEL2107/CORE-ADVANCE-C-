	#include<stdio.h>
	#include<conio.h>
	void fibo(int n);
	void main()
	{
	 int n;
	 clrscr();
	 printf("enter a number:");
	 scanf("%d",&n);

	 fibo(n);
	 getch();
	}
	void fibo(int n)
	{
	 int i,t,a=0,b=1;
	 printf("fibbonacci series is:");
	 for(i=1;i<=n;i++)
	 {
	  t=a+b;
	  a=b;
	  b=t;
	  printf("%d,",a);
	 }
	}
