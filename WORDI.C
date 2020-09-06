	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 char name[10];
	 int count=1,i;
	 clrscr();
	 printf("enter the string:");
	 scanf("%s",name);
	 for(i=0;name[i]!='\0';i++)
	 {
	  if(name[i]==' ')
	  {
	  count++;
	  }
	 }
	  printf("number of words:%d",count);
	  getch();
	 }

