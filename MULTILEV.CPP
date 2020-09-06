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
   class update:public shop
   {
    public:
	    int newstock,addstock;
	    void updat()
	    {
	     cout<<"\nenter new stock:";
	     cin>>addstock;
	     newstock=stock+addstock;
	     cout<<"\nupdated stock is:"<<newstock;
	    }
   };
   class online:public update
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
    s.updat();
    s.payment();
    getch();
    return 0;
   }