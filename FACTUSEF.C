	#include<stdio.h>
	#include<conio.h>
	int fact();
	void main()
	{
	 clrscr();
	 printf("enter a number:");
	 fact();
	 getch();
	}
	int fact()
	{
	 int i,n,fact=1;
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	  fact=fact*i;
	 }
	 printf("fact of %d is: %d",n,fact);
	 return fact;
	}