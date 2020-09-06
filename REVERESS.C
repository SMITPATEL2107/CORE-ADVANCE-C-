	#include<stdio.h>
	#include<conio.h>
	void reverse();
	void main()
	{
	 clrscr();
	 printf("enter a sentence:");
	 reverse();
	 getch();
	}
	void reverse()
	{
	 char c;
	 scanf("%c",&c);
	 if (c!='\n')
	 {
	  reverse();
	  printf("%c",c);
	 }
	}
