	#include<iostream.h>
	#include<conio.h>
	int main()
	{
	 int a,b,c;
	 clrscr();
	 cout<<"enter a value:";
	 cin>>a;
	 cout<<"enter b value:";
	 cin>>b;
	 cout<<"enter c value:";
	 cin>>c;
	 cout<<a<<b<<c;
	 if(a<b && c<b)
	 {
	  cout<<"\nb is maximum";
	 }
	 else if(a<c && b<c)
	 {
	  cout<<"\nc is maximum";
	 }
	 else
	 {
	  cout<<"\na is maximum";
	 }
	 getch();
	 return 0;
	}