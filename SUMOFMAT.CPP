	#include<iostream.h>
	#include<conio.h>
	class matrix
	{
	 public:
		int a[2][2],b[2][2],sum[2][2];
		int i,j;
		void detail()
		{
		 for(i=0;i<2;i++)
		 {
		  for(j=0;j<2;j++)
		  {
		   cin>>a[i][j];
		  }
		 }
		}
		void get()
		{
		 for(i=0;i<2;i++)
		 {
		  for(j=0;j<2;j++)
		  {
		   cin>>b[i][j];
		  }
		 }
		}
		void add()
		{
		 for(i=0;i<2;i++)
		 {
		  for(j=0;j<2;j++)
		  {
		   sum[i][j]=a[i][j]+b[i][j];
		   cout<<sum[i][j]<<"\t";
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
	 call.add();
	 getch();
	 return 0;
	}
