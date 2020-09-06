	#include<iostream.h>
	#include<conio.h>
	int add();
	int main()
	{
	 int a,b,sum;
	 clrscr();
	 sum=add();
	 cout<<sum;
	 getch();
	 return 0;
	}
	int add()
	{
	       int a,b,sum;
	       a=10,b=12;
	       sum=a+b;
	       return sum;
	}