	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int choice,r,l,w,b,h;
	 int area;
	 clrscr();
	 printf("1 for area of triangle\n2 for area of ractangle\n3 for area of circle");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	  case 1:
		printf("input b and h of triangle");
		scanf("%d%d",&b,&h);
		area=0.5*b*h;
		break;
	  case 2:
		printf("input l and w of ractangle");
		scanf("%d%d",&l,&w);
		area=l*w;
		break;
	  case 3:
		printf("input r of circle");
		scanf("%d",&r);
		area=3.14*r*r;
		break;
	  default:
		printf("wrong choice");
		break;
	  }
	  printf("\narea is: %d",area);
	  getch();
	 }
