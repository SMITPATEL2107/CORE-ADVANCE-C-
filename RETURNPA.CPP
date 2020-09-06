	#include<iostream.h>
	#include<conio.h>
	int add(int a,int b);
	int main()
	{
	 int a=10,b=15,sum;
	 clrscr();
	 sum=add(a,b);
	 cout<<"sum of "<<a<<" & "<<b<<" is:"<<sum;
	 getch();
	 return 0;
	}
	int add(int a,int b)
	{
	 int sum;
	 sum=a+b;
	 return sum;
	}
