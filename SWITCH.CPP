	#include<iostream.h>
	#include<conio.h>
	int main()
	{
	 int choice;
	 clrscr();
	 cout<<"enter your choice:";
	 cin>>choice;
	 switch(choice)
	 {
	  case 1:
		 cout<<"in case 1";
		 break;
	  case 2:
		 cout<<"in case 2";
		 break;
	  case 3:
		 cout<<"in case 3";
		 break;
	  default:
		 cout<<"wrong choice";
		 break;
	 }
	 getch();
	 return 0;
	}