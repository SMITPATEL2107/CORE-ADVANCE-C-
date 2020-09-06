	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int a,n,fact=1;
	clrscr();
	printf("enter value");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
	 fact=fact*a;
	}
	 printf("fect of %d is: %d",n,fact);
	 getch();
	}

