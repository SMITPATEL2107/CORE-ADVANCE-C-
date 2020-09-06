	#include<iostream.h>
	#include<conio.h>
	class maths
	{
	  public:
		int sum,sub;
		double mul,div;
		void cal()
		{
		 int a,b;
		 cout<<"enter value for a:";
		 cin>>a;
		 cout<<"enter vale for b:";
		 cin>>b;
		 sum=a+b;
		 cout<<"\nsum is:"<<sum;
		}
		void cal(int a,int b)
		{
		 sub=a-b;
		 cout<<"\nsub is:"<<sub;
		}
		void cal(double a,double b)
		{
		 mul=a*b;
		 cout<<"\nmul is:"<<mul;
		}
		void cal(double a,int b)
		{
		 div=a/b;
		 cout<<"\ndiv is:"<<div;
		}
	};

	int main()
	{
	 maths m;
	 clrscr();
	 m.cal();
	 m.cal(10,8);
	 m.cal(4.4,8.8);
	 m.cal(10.5,3);
	 getch();
	 return 0;
	}