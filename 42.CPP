#include<iostream.h>
#include<conio.h>
class second;
class first
{
	friend class second;
	private:
	int a;

};
class second
{       public:
	void max(first p1,int b)
	{
	p1.a=10;
	if(p1.a>b)
	cout<<"max number:"<<p1.a;
	else
	cout<<"max number:"<<b;
	}
};
int main()
{
 first s1;
 second s2;
 clrscr();
 s2.max(s1,20);
 getch();
 return 0;
}