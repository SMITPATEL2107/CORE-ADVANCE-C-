	#include<iostream.h>
	#include<conio.h>
	class matrix
	{
	 public:
		int a[3][3];
		int i,j;
		void detail()
		{
		 for(i=0;i<3;i++)
		 {
		  for(j=0;j<3;j++)
		  {
		   cin>>a[i][j];
		  }
		 }
		}
		void get()
		{
		 for(i=0;i<3;i++)
		 {
		  for(j=0;j<3;j++)
		  {
		   cout<<a[i][j]<<"\t";
		  }
		  cout<<endl;
		 }
		}
	};
	int main()
	{
	 matrix call;
	 clrscr();
	 call.detail();
	 call.get();
	 getch();
	 return 0;
	}
