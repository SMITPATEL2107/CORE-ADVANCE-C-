	#include<iostream.h>
	#include<conio.h>
	class math
	{
	 public:
		int x,y;
		void details()
		{
		x=50,y=5;
		cout<<"x: "<<x<<" y: "<<y;
		}
		void sum()
		{
		 int sum;
		 sum=x+y;
		 cout<<"\nsum is:"<<sum;
		}
		void sub()
		{
		 int sub;
		 sub=x-y;
		 cout<<"\nsub is:"<<sub;
		}
		void mul()
		{
		 int mul;
		 mul=x*y;
		 cout<<"\nmul is:"<<mul;
		}
		void div()
		{
		 int div;
		 div=x/y;
		 cout<<"\ndiv is:"<<div;
		}
	};
	int main()
	{
	 math call;
	 clrscr();
	 call.details();
	 call.sum();
	 call.sub();
	 call.mul();
	 call.div();
	 getch();
	 return 0;
	}
