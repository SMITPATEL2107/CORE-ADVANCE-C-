	#include<iostream.h>
	#include<conio.h>
	class cricketer
	{
	 public:
		int r1,r2,r3;
		char b1[10],b2[10],b3[10];
		void get()
		{
		 cout<<"enter 1st bastman name:";
		 cin>>b1;
		 cout<<"enter 2nd bastman name:";
		 cin>>b2;
		 cout<<"enter 3rd bastman name:";
		 cin>>b3;
		 cout<<"enter 1st bastman runs:";
		 cin>>r1;
		 cout<<"enter 2nd bastman runs:";
		 cin>>r2;
		 cout<<"enter 3rd bastman runs:";
		 cin>>r3;
		}
	};
	class bastman:public cricketer
	{
	 public:
		int total,avg;
		void dis()
		{
		 total=r1+r2+r3;
		 avg=total/3;
		 cout<<endl<<b1<<":"<<r1;
		 cout<<endl<<b2<<":"<<r2;
		 cout<<endl<<b3<<":"<<r3;
		 cout<<"\ntotal runs:"<<total;
		 cout<<"\navg runs:"<<avg;
		 if(r1>r2 && r1>r3)
		 {
		  cout<<"\nbest perfomer:"<<b1;
		 }
		 else if(r2>r3 && r2>r1)
		 {
		  cout<<"\nbest perfomer:"<<b2;
		 }
		 else
		 {
		  cout<<"\nbest perfomer:"<<b3;
		 }
		}
	};

	int main()
	{
	 bastman b;
	 clrscr();
	 b.get();
	 b.dis();
	 getch();
	 return 0;
	}