#include<iostream.h>
#include<conio.h>
class Q;
class P
{
	friend class Q;
	private:
	int a;
};
class Q
{
	public:

	void swap(P a1,int b)
	{
		a1.a=10;
		a1.a=a1.a+b;
		b=a1.a-b;
		a1.a=a1.a-b;
	}
};
int main()
{
	P s1;
	Q s2;
	s2.swap(s1,20);
	getch();
	return 0;
}