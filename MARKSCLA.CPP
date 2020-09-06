	#include<iostream.h>
	#include<conio.h>
	class mark
	{
	 public:
		int i,rollno[10],sub1[10],sub2[10],sub3[10],total[10],per[10];
		void getdata()
		{
		 for(i=0;i<4;i++)
		 {
		  cout<<"\nenter roll no:";
		  cin>>rollno[i];
		  cout<<"enter sub1 mark:";
		  cin>>sub1[i];
		  cout<<"enter sub2 mark:";
		  cin>>sub2[i];
		  cout<<"enter sub3 mark:";
		  cin>>sub3[i];
		 }
		 cout<<"Roll no:";
		 cout<<"\tsub1";
		 cout<<"\tsub2";
		 cout<<"\tsub3";
		 cout<<"\ttotal";
		 cout<<"\tpercentage"<<endl;
		 for(i=0;i<4;i++)
		 {
		  cout<<rollno[i];
		  cout<<"\t\t"<<sub1[i];
		  cout<<"\t"<<sub2[i];
		  cout<<"\t"<<sub3[i];
		  total[i]=sub1[i]+sub2[i]+sub3[i];
		  cout<<"\t"<<total[i];
		  per[i]=total[i]/3;
		  cout<<"\t"<<per[i]<<endl;
		 }
		}
	};

	int main()
	{
	mark m;
	clrscr();
	m.getdata();
	getch();
	return 0;
	}