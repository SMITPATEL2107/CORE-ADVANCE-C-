	#include<iostream.h>
	#include<conio.h>
	class addition
	{
	 public:
		void add()
		{
		 cout<<(2+3)<<endl;
		}
		void add(int a,int b)
		{
		 cout<<a+b<<endl;
		}
		void add(int a,int b,int c)
		{
		 cout<<a+b+c<<endl;
		}
       };

       int main()
       {
	addition a;
	clrscr();
	a.add();
	a.add(5,9);
	a.add(3,6,9);
	getch();
	return 0;
       }


