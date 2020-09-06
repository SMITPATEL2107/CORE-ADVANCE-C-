#include<iostream.h>
#include<conio.h>
class person
{
	public:
	int age;
	char name[10];
	void read()
	{
	cout<<"enter name:";
	cin>>name;
	cout<<"enter age:";
	cin>>age;
	cout<<"\nname:"<<name;
	cout<<"\nage:"<<age;
	}
};
class student
{
	public:
	int percentage;
	void write()
	{
	cout<<"\n\nenter percenatage:";
	cin>>percentage;
	cout<<"percentage:"<<percentage;
	}
};
class teacher:public person,public student
{
	public:
	int salary;
	void sal()
	{
	cout<<"\n\nenter salary";
	cin>>salary;
	cout<<"salary:"<<salary;
	}


};
int main()
{
	teacher s1;
	clrscr();
	s1.read();
	s1.write();
	s1.sal();
	getch();
	return 0;
}