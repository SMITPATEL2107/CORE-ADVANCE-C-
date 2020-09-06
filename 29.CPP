#include<iostream.h>
#include<conio.h>
class count
{
	public:
	int a,b,sum,sub,multi,dev;

	count()
	{
	cout<<"enter value of a:";
	cin>>a;
	cout<<"enter value of b:";
	cin>>b;
	}
	void add()
	{
	sum=a+b;
	}
	void substract()
	{
	sub=a-b;
	}
	void multiplication()
	{
	multi=a*b;
	}
	void devison()
	{
	dev=a/b;
	}
	void display()
	{
	cout<<"sum is:"<<sum;
	cout<<"\nsub is:"<<sub;
	cout<<"\nmulti is:"<<multi;
	cout<<"\ndev is:"<<dev;
	}
};
int main()
{
	clrscr();
	count s1;
	s1.add();
	s1.substract();
	s1.multiplication();
	s1.devison();
	s1.display();
	getch();
	return 0;
}