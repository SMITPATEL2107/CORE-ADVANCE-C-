	#include<stdio.h>
	#include<conio.h>
	int fact()
	{
	 int i,n,factorial;
	 factorial=1;
	 printf("enter num for factorial:");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	  factorial=factorial*i;
	 }
	 return factorial;
	}
	void main()
	{
	int factorial;
	clrscr();
	factorial=fact();
	printf("factorial num is :%d",factorial);
	getch();
       }