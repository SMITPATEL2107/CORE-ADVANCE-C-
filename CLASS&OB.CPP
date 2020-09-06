#include<iostream.h>
#include<conio.h>
class table
{
 public:
	char color[20];
	int price;
	void getdetails()
	{
	 cout<<"enter color and price of an object";
	 cin>>color>>price;
	}
	void working()
	{
	 cout<<"all thisngs are working properly";
	}
	void display()
	{
	 cout<<"object color is "<<color<<" and price is:"<<price;
	}

};
int main()
{
table pen;
clrscr();
pen.getdetails();
pen.display();
pen.working();
getch();
 return 0;
}