#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int rollno,i;

	void roll()
	{
	 cout<<"enter roll number:";
	 cin>>rollno;
	}
};
class test:public student
{
	public:
	//int i;
	int mark[5];

	void marks()
	{
	for(i=0;i<2;i++)
	{
	cout<<"\nenter mark:";
	cin>>mark[i];
	}
	}
};
class result:public test
{
	public:
	int total;

	void add()
	{
	total=0;
	for(i=0;i<2;i++)
	{
	total=total+mark[i];
	}
	cout<<"\ntotal mark:"<<total;
	}
};
int main()
{
	result s1;
	clrscr();
	s1.roll();
	s1.marks();
	s1.add();
	getch();
	return 0;
}
