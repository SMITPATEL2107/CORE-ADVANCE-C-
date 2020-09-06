	#include<iostream.h>
	#include<conio.h>
	void swap(int x,int y);
	int main()
	{
	 int x=10,y=20;
	 clrscr();
	 cout<<"befor swap x:"<<x<<" y:"<<y;

	 swap(x,y);
	 getch();
	 return 0;
	 }

	 void swap(int x,int y)
	 {
	  int t=x;
	  x=y;
	  y=t;
	  cout<<"\nafter swap x:"<<x<<" y:"<<y;
	 }