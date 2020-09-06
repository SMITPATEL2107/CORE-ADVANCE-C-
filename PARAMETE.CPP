	#include<iostream.h>
	#include<conio.h>
	class addition
	{
	 public:
		int x,y;
		addition()
		{
		}
		addition(int a,int b)
		{
		 cout<<"in parameterized const...";
		 x=a;
		 y=b;
		}
		int sum()
		{
		 int a1;
		 a1=x+y;
		 cout<<"sum is:"<<a1;
		 return 0;
		}
      };
      int main()
      {
       clrscr();
       addition add=addition(2,3);
       add.sum();
       getch();
       return 0;
      }
