	#include<iostream.h>
	#include<conio.h>
	class bank
	{
	 public:
		int bal,acc_no;
		char name[20],acc_type[10];
		void assing()
		{
		 cout<<"enter name:";
		 cin>>name;
		 cout<<"enter acc no:";
		 cin>>acc_no;
		 cout<<"enter acc type:";
		 cin>>acc_type;
		 cout<<"enter opning bal:";
		 cin>>bal;
		}
		void deposit()
		{
		 int damt;
		 cout<<"enter deposit amount:";
		 cin>>damt;
		 bal=bal+damt;
		}
		void withdraw()
		{
		 int wamt;
		 cout<<"enter withdraw amount:";
		 cin>>wamt;
		 if(bal<wamt)
		 {
		  cout<<"unable to withdraw";
		 }
		 else
		 {
		  bal=bal-wamt;
		 }
		}
		void dis()
		{
		 cout<<"\nacc holder name:"<<name;
		 cout<<"\ntotal balance is:"<<bal;
		}
	};

	int main()
	{
	 bank bk;
	 clrscr();
	 bk.assing();
	 bk.deposit();
	 bk.withdraw();
	 bk.dis();
	 getch();
	 return 0;
	}