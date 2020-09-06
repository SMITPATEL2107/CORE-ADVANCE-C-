#include<iostream.h>
#include<conio.h>
class B;
class A
{
	friend class B;
	private:
	int a;
};
class B
{
	public:
	int temp;
	void swap(A p1,int b)
	{
		p1.a=10;
		temp=p1.a;
		p1.a=b;
		b=temp;
		cout<<p1.a<<endl;
		cout<<b;
	}
};
int main()
{
 A s1;
 B s2;
 clrscr();
 s2.swap(s1,20);
 getch();
 return 0;
}