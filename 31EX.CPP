	#include<iostream.h>
	#include<conio.h>
	class area
	{
	 public:
		int r;
		void cal()
		{
		 int cir;
		 cout<<"enter redius:";
		 cin>>r;
		 cir=3.14*r*r;
		 cout<<"\narea of circle:"<<cir;
		}
		void cal(int l,int b)
		{
		 int ract;
		 ract=l*b;
		 cout<<"\narea of ractangle:"<<ract;
		}
		void cal(double b,int h)
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
	 a.cal();
	 a.cal(5,10);
	 a.cal(4.5,8);
	 getch();
	 return 0;
	}