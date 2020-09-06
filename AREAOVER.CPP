	#include<iostream.h>
	#include<conio.h>
	#define PI 3.14
	class area
	{
	 public:
		int r;
		void method()
		{
		 int cir;
		 cout<<"enter redius";
		 cin>>r;
		 cir=PI*r*r;
		 cout<<"area of circle:"<<cir;
		}
		void method(int l,int h)
		{
		 int rect;
		 rect=l*h;
		 cout<<"\narea of rectangle:"<<rect;
		}
		void method(double b,int h)
		{
		 int tri;
		 tri=0.5*b*h;
		 cout<<"\narea of triangle:"<<tri;
		}
	};

	int main()
	{
	 area a;
	 clrscr();
	 a.method();
	 a.method(2,3);
	 a.method(4.5,5);
	 getch();
	 return 0;
	}