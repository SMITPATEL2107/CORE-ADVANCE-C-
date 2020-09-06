#include<iostream.h>
#include<conio.h>
class cricketer
{
	public:
	int run1,run2,run3;
	char batman1[10],batman2[10],batman3[10];
	void inputdata()
	{
	cout<<"enter 1st bastman name:";
	cin>>batman1;
	cout<<"\nenter 2nd bastman name:";
	cin>>batman2;
	cout<<"\nenter 3rd bastman name:";
	cin>>batman3;
	cout<<"\nenter 1st run:";
	cin>>run1;
	cout<<"\nenter 2nd run:";
	cin>>run2;
	cout<<"\nenter 3rd run:";
	cin>>run3;
	}

};
class batsman:public cricketer
{
	public:
	int ave,best,total;
	void display()
	{
	cout<<"\n"<<batman1<<"\t"<<run1;
	cout<<"\n"<<batman2<<"\t"<<run2;
	cout<<"\n"<<batman3<<"\t"<<run3;
	total=run1+run2+run3;
	cout<<"\ntotal run:"<<total;
	ave=total/3;
	cout<<"\naverage run:"<<ave;
	if(run1>run2 && run1>run3)
	{
	cout<<"\nbest performance:"<<batman1;
	}
	else if(run2>run3)
	{
	cout<<"\nbest performance:"<<batman2;
	}
	else
	{
	cout<<"\nbest performance:"<<batman3;
	}
	}
};
int main()
{
	batsman s1;
	clrscr();
	s1.inputdata();
	s1.display();
	getch();
	return 0;
}