	#include<iostream.h>
	#include<conio.h>
	class bank
	{
	  public:
		char name[20],acty[10];
		int acno,bal;
		void get()
		{
		 cout<<"enter acc holder name:";
		 cin>>name;
		 cout<<"enter acc type:";
		 cin>>acty;
		 cout<<"enter acc no:";
		 cin>>acno;
		 cout<<"enter opning bal:";
		 cin>>bal;
		}
		void depo()
		{
		 int damt;
		 cout<<"enter deposite amount:";
		 cin>>damt;
		 bal+=damt;
		}
		void wdraw()
		{
		 int wamt;
		 cout<<"enter withdraw amount:";
		 cin>>wamt;
		 if(wamt>bal)
		 {
		  cout<<"bal is low";
		 }
		 else
		 {
		  bal-=wamt;
		 }
		}
		void dis()
		{
		 cout<<"\nacc holder name:"<<name;
		 cout<<"\ntotal bal:"<<bal;
		}
	};
	int main()
	{
	 bank b;
	 clrscr();
	 b.get();
	 b.depo();
	 b.wdraw();
	 b.dis();
	 getch();
	 return 0;
	}