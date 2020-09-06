	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int a,n,digit;
	 clrscr();
	 printf("enter a number");
	 scanf("%d",&n);
	 digit=0;
	 a=0;
	 while(n>0)
	 {
	  digit=n%10;
	  n=n/10;
	  if(a<digit)
	  {
	   a=digit;
	  }
	 }
	 printf("\nmax number out of given number is:%d",a);
	 getch();
	}