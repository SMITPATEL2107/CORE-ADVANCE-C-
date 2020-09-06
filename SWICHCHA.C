#include<stdio.h>
#include<conio.h>
void main()
{
 char choice;
 clrscr();
 printf("choose a or b or c");
 scanf("%c",&choice);
 switch(choice)
 {
   case 'a':
	printf("in case 1");
	break;
   case 'b':
	printf("in case 2");
	break;
   case 'c':
	printf("in case 3");
	break;
   default:
	printf("wrong choice");
	break;



  }
  getch();
}