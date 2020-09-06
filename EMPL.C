	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int a,b;
	 clrscr();
	 printf("enter two amount");
	 scanf("%d%d",&a,&b);
	 printf("\nemployee amount=%d",a);
	 printf("\nbill amount=%d",b);
	 if(a>=b)
	 {
	  printf("\neligible for shopping");
	 }
	 else
	 {
	  printf("\nnot eligible for shopping");
	 }
	 getch();
	 }