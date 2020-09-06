	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int ele[10],i,n,sum=0;
	 float avg=0;
	 clrscr();
	 for(i=0;i<10;i++)
	 {
	  printf("enter 10 elements:");
	  scanf("%d",&ele[i]);
	  sum+=ele[i];
	 }
	  printf("sum of 10 elements:%d",sum);
	  avg=sum/10;
	  printf("\navg of 10 elements:%f",avg);
	getch();
	}