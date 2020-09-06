	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int n;
	 clrscr();
	 printf("enter a number:");
	 scanf("%d",&n);
	 if(n%2==0)
	 {
	  printf("\n%d is even number",n);
	 }
	 else
	 {
	 printf("\n%d is odd number",n);
	 }
	 getch();
	}