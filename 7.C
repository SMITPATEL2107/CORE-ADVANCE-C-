	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int calc,fern;
	 clrscr();
	 printf("enter temp in calcius:");
	 scanf("%d",&calc);
	 printf("\ntemp in calcius is :%d",calc);
	 fern=(calc*9/5)+32;
	 printf("\ntemp in fahrenheit is :%d",fern);
	 getch();
	}