	#include<iostream.h>
	#include<conio.h>
	class parent
	{
	 public:
		int age;
		parent()//defualt constructor
		{
		 cout<<"defualt constructor";
		}
		void data()
		{
		 cout<<"\nenter age:";
		 cin>>age;
		}
		void dis()
		{
		 cout<<"\n age is:"<<age;
		}
       };
       int main()
       {
	clrscr();
	parent call;//const call it self
	call.data();
	call.dis();
	getch();
	return 0;
       }
