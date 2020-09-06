	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int i=0;
	 clrscr();
	 loop:
	 i++;
	  printf("%d",i);
	  if(i<5)
	  goto loop;

	  getch();
	}
