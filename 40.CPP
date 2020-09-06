#include<iostream.h>
#include<conio.h>
class bank
{
	public:
	int n;
	void types()
	{
	 cout<<"enter 1 for saving or enter 2 for current:";
	 cin>>n;
	}

};
class account:public bank
{
  public:
  char name[20],type[20];
  long balance,ano,add;
  void condition()
  {
	if(n==1)
	{
	cout<<"no checkbook facility";
	}
	else if(n==2)
	{
	cout<<"checkbook facility available";
	}
  }
  void getdata()
  {
   cout<<"\nenter cusomer name:";
   cin>>name;
   cout<<"\nenter account number:";
   cin>>ano;
   cout<<"\nenter type of account:";
   cin>>type;
   cout<<"\n"<<name;
   cout<<"\n"<<ano;
   cout<<"\n"<<type;
  }
  void deposit()
  {
  balance=0;
   cout<<"\nenter amount to be deposit:";
   cin>>add;
   balance=balance+add;
   }
   void display()
   {
   cout<<"total balance:"<<balance;
   }
   void interst()
   {
   int r,year;
   cout<<"\nenter rate:";
   cin>>r;
   balance=balance+balance*r/100;
   cout<<"\ntotal balance:"<<balance;
   }
   void withdraw()
   {
	int sub;
	cout<<"\nenter amount to be withdraw:";
	cin>>sub;
	if(sub<balance)
	{
	balance=balance-sub;
	}
	else
	{
	cout<<"\ninsufficiant balance";
	}
	cout<<"\ntotal balance:"<<balance;
	if(balance<3000)
	{
	min();
	}
   }
   void min()
   {
    if(balance<3000)
    {
    cout<<"\npenalty applied";
    balance=balance-500;
    }
    cout<<"\ntotal balance:"<<balance;
   }
};
int main()
{
 account b1;
 clrscr();
 b1.types();
 b1.condition();
 b1.getdata();
 b1.deposit();
 b1.display();
 b1.interst();
 b1.withdraw();
 getch();
 return 0;
}
