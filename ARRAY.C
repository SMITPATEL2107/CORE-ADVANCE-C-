	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int i,sub[5]={80,80,80,80,80},total,per;
	 clrscr();
	 total=0;
/*	 for(i=0;i<5;i++)
	 {
	   printf("enter sub mark:");
	   scanf("%d",&sub[i]);

	 } */
	  for(i=0;i<5;i++)
	  {
	  printf("%d\n",sub[i]);
	  total+=sub[i];

	  }
		  per=total/5;
		  printf("%d\n%d",total,per);
	 getch();
	}