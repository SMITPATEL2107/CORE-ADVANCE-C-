	#include<stdio.h>
	#include<conio.h>
	void swap(int x,int y);
	void main()
	{
	 int x=10,y=20;
	 clrscr();
	 printf("befor swap x=%d,y=%d",x,y);

	 swap(x,y);
	 getch();
	 }

	 void swap(int x,int y)
	 {
	  int t=x;
	  x=y;
	  y=t;
	  printf("\nafter swap x=%d,y=%d",x,y);
	 }





