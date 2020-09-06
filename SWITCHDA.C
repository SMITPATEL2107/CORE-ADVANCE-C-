	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int choice;
	 clrscr();
	 printf("1 for sun\n2 for mon\n3 for tue\n4 for wen\n5 for thus\n6 for fri\n7 for sat");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	  case 1:
		printf("sunday");
		break;
	  case 2:
		printf("monday");
		break;
	  case 3:
		printf("tuseday");
		break;
	  case 4:
		printf("wensday");
		break;
	  case 5:
		printf("thusday");
		break;
	  case 6:
		printf("friday");
		break;
	  case 7:
		printf("satrday");
		break;
	  default:
		printf("wrong choice");
		break;
	  }
	  getch();
	 }


