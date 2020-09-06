	#include<iostream.h>
	#include<conio.h>
	class mat
	{
	 public:
		int a[2][2],i,j;
	 void get()
	 {
	  cout<<"enter elements for matrix:";
	  for(i=0;i<2;i++)
	  {
	   for(j=0;j<2;j++)
	   {
	    cin>>a[i][j];
	   }
	  }
	 }
	 void dis()
	 {
	  cout<<"\nmatrix:"<<endl;
	  for(i=0;i<2;i++)
	  {
	   for(j=0;j<2;j++)
	   {
	    cout<<a[i][j]<<"\t";
	   }
	   cout<<endl;
	  }
	 }
	};
	int main()
	{
	 mat m;
	 clrscr();
	 m.get();
	 m.dis();
	 getch();
	 return 0;
	}
