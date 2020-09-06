	#include<iostream.h>
	#include<conio.h>
	class shop
	{
	 public:
	 int invest,income,profit,stock,expence;
	 void getdata()
	 {
	  cout<<"enter investment:";
	  cin>>invest;
	  cout<<"enter stock:";
	  cin>>stock;
	  cout<<"enter income:";
	  cin>>income;
	  cout<<"enter expence:";
	  cin>>expence;
	 }
	 void total()
	 {
	  profit=income-expence;
	  cout<<"profit is:"<<profit;
	 }
   };
   class online:public shop
   {
    public:
	  void payment()
	  {
	   cout<<"\nacc online payment";
	  }
   };
   int main()
   {
    online s;
    clrscr();
    s.getdata();
    s.total();
    s.payment();
    getch();
    return 0;
   }