	#include<iostream.h>
	#include<conio.h>
	void add(int *a,int *b)
	{
	 int sum;
	 sum=(*a)+(*b);
	 cout<<sum;
	}
	int main()
	{
	 int a=11,b=22;
	 clrscr();
	 add(&a,&b);
	 getch();
	 return 0;
	}
