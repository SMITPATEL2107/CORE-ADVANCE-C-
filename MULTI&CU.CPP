	#include<iostream.h>
	#include<conio.h>
	inline int multi(int x,int y)
	{
	 return x*y;
	}
	inline int cube(int z)
	{
	 return z*z*z;
	}

	int main()
	{
	 int a,b,c;
	 clrscr();
	 cout<<"enter value of a:";
	 cin>>a;
	 cout<<"enter value of b:";
	 cin>>b;
	 cout<<"multiplication of "<<a<<" & "<<b<<" is:"<<multi(a,b);
	 cout<<"\nenter value c:";
	 cin>>c;
	 cout<<"cube of "<<c<<" is:"<<cube(c);
	 getch();
	 return 0;
	}
