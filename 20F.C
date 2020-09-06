	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int a,i,table;
	 clrscr();
	 printf("enter a number for table");
	 scanf("%d",&a);
	 for(i=1;i<=10;i++)
	 {
	  table=a*i;
	  printf("\n%d*%d=%d",a,i,table);
	 }
	 getch();
	}