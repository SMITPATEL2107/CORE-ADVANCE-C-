	#include<iostream.h>
	#include<conio.h>
	class bookshop
	{
	 public:
		char name[20],title[20],publisher[20];
		int price;
		void getdata()
		{
		 cout<<"enter name of author:";
		 cin>>name;
		 cout<<"enter name of title:";
		 cin>>title;
		 cout<<"enter price:";
		 cin>>price;
		 cout<<"enter name of publisher:";
		 cin>>publisher;
		}
		void display()
		{
		 cout<<"Author Name:"<<name;
		 cout<<"\nBook title:"<<title;
		 cout<<"\nBook price:"<<price;
		 cout<<"\nPublisher name:"<<publisher;
		}
	};

	int main()
	{
	 bookshop b;
	 clrscr();
	 b.getdata();
	 b.display();
	 getch();
	 return 0;
	}

