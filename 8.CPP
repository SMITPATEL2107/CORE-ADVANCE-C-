	#include<iostream.h>
	#include<conio.h>
	class lecture
	{
	 public:
		char sub[20],course[20],lecturer[20],details[20];
		int n,i;
		void getdata()
		{
		 for(i=0;i<5;i++)
		 {
		  cout<<"enter lecture number:";
		  cin>>n;
		  cout<<"enter subject name:";
		  cin>>sub;
		  cout<<"enter course name:";
		  cin>>course;
		  cout<<"enter lecturer name:";
		  cin>>lecturer;

		  detail();
		  display();
		 }
		}
		void detail()
		{
		 cout<<"enter lecture details:";
		 cin>>details;
		}
		void display()
		{
		 cout<<endl;
		 cout<<"\nlecture number:"<<n;
		 cout<<"\nsubject name:"<<sub;
		 cout<<"\ncourse name:"<<course;
		 cout<<"\nlecturer name:"<<lecturer;
		 cout<<"\ndetails:"<<details<<endl;
		 cout<<endl;
		}
	};

	int main()
	{
	 lecture l;
	 clrscr();
	 l.getdata();
	 l.detail();
	 l.display();
	 getch();
	 return 0;
	}
