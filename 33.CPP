	#include<iostream.h>
	#include<conio.h>
	class maths
	{
	 public:
		void dis()
		{
		 int a=5,b=7;
		 cout<<"sum is :"<<a+b<<endl;
		}
		void dis(int a,int b)
		{
		 cout<<"sub is :"<<a-b<<endl;
		}
		void dis(int a,double b)
		{
		 cout<<"mul is :"<<a*b<<endl;
		}
		void dis(double a,double b)
		{
		 cout<<"div is :"<<a/b<<endl;
		}
	};
	int main()
	{
	 maths s1;
	 clrscr();
	 s1.dis();
	 s1.dis(10,4);
	 s1.dis(7,5.5);
	 s1.dis(12.5,2.5);
	 getch();
	 return 0;
	}

