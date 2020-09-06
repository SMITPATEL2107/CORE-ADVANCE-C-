	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int ele[10],i,max=0;
	 clrscr();
	 for(i=0;i<10;i++)
	 {
	  printf("enter 10 elements:");
	  scanf("%d",&ele[i]);
	 }
	 for(i=0;i<10;i++)
	 {
	  if(max<ele[i])
	  max=ele[i];
	 }
	 printf("maximum element is:%d",max);
	 getch();
	}