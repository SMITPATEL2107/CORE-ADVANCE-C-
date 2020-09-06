	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int a,b;
	 int choice;
	 clrscr();
	 printf("enter two numbers:");
	 scanf("%d%d",&a,&b);
	 printf("1  for sum\n2 for sub\n3 for mul\n4 for div");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	  case 1:
		printf("sum=%d",a+b);
		break;
	  case 2:
		printf("sub=%d",a-b);
		break;
	  case 3:
		printf("mul=%d",a*b);
		break;
	  case 4:
		printf("div=%d",a/b	);
		break;
	  default:
		printf("wrong choice");
		break;
	  }
	  getch();
	 }