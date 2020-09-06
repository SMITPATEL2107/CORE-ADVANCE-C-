	#include<iostream.h>
	#include<conio.h>
	class intrest
	{
	 public:
		int si;
		intrest(int x,int y,int z)
		{
		 si=(x*y*z)/100;
		 cout<<"simple intrest is:"<<si;
		}
	};

	int main()
	{
	 int p,r,t;
	 clrscr();
	 cout<<"enter principle,rate of intrest & time:";
	 cin>>p>>r>>t;
	 intrest i=intrest(p,r,t);
	 getch();
	 return 0;
	}
