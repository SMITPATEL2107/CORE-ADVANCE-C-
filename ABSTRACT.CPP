	#include<iostream.h>
	#include<conio.h>
	class bank
	{
	 public:
		virtual void details()=0;
	};
	class sbi:public bank
	{
	 public:
		void details()
		{
		 cout<<"gjhg";
		}
	};

	int main()
	{
	 sbi s;
	 clrscr();
	 s.details();
	 getch();
	 return 0;
	}