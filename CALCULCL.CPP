	#include<iostream.h>
	#include<conio.h>
	class math
	{
	 public:
		int a,b,sum,sub,mul,div;
		void getdata()
		{
		 cout<<"enter valve of a:";
		 cin>>a;
		 cout<<"enter valve of b:";
		 cin>>b;
		}
		void s1()
		{
		 sum=a+b;
		}
		void s2()
		{
		 sub=a-b;
		}
		void s3()
		{
		 mul=a*b;
		}
		void s4()
		{
		 div=a/b;
		}
		void display()
		{
		 cout<<"sum is:"<<sum;
		 cout<<"\nsub is:"<<sub;
		 cout<<"\nmul is:"<<mul;
		 cout<<"\ndiv is:"<<div;
		}
	};

	int main()
	{
	 math m;
	 clrscr();
	 m.getdata();
	 m.s1();
	 m.s2();
	 m.s3();
	 m.s4();
	 m.display();
	 getch();
	 return 0;
	}
