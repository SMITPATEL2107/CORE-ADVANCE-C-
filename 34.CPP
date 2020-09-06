	#include<iostream.h>
	#include<conio.h>
	class matrix
	{
	  public:
		double add[3],i;
		void sum(int a1[],int a2[])
		{
		 for(i=0;i<3;i++)
		 {
		  add[i]=a1[i]+a2[i];
		  cout<<endl<<add[i];
		 }
		}
		void sum(float b1[],int b2[])
		{
		 for(i=0;i<3;i++)
		 {
		  add[i]=b1[i]+b2[i];
		  cout<<endl<<add[i];
		 }
		}
	};
	int main()
	{
	 matrix m;
	 clrscr();
	 int a1[]={5,8,6},a2[]={3,6,9};
	 float b1[]={5.7,3.9,7.3};
	 int b2[]={8,9,4};
	 m.sum(a1,a2);
	 m.sum(b1,b2);
	 getch();
	 return 0;
	}