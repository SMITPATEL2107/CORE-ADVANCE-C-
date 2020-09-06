	#include<iostream.h>
	#include<conio.h>
	class fib
	{
	 public:
		int a,b,c,i,j,fact;
		void gen(int n)
		{
		 a=0,b=1;
		 for(i=1;i<=n;i++)
		 {
		  cout<<a<<" ";
		  c=a+b;
		  b=a;
		  a=c;
		 }
		}
		void gen1(int n)
		{
		 fact=1;
		 for(j=1;j<=n;j++)
		 {
		  fact=fact*j;
		 }
		 cout<<fact;
		}
	};
	int main()
	{
	 int n;
	 fib f;
	 clrscr();
	 cout<<"enter a number of terms:";
	 cin>>n;
	 cout<<"\nfibonacci series is:";
	 f.gen(n);
	 cout<<"\nfactorial is:";
	 f.gen1(n);
	 getch();
	 return 0;
	}



