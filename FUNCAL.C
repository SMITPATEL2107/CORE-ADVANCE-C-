		#include<stdio.h>
	#include<conio.h>
	void add();
	void sub();
	void mul();
	void div();
	void main()
	{
	 clrscr();
	 add();
	 sub();
	 mul();
	 div();
	 getch();
	}
	void add()
	{
	 int a=15,b=10,sum;
	 sum=a+b;
	 printf("sum of %d & %d is: %d",a,b,sum);
	}
	void sub()
	{
	 int a=15,b=10,sub;
	 sub=a-b;
	 printf("\nsub of %d & %d is: %d",a,b,sub);
	}
	void mul()
	{
	 int a=15,b=10,mul;
	 mul=a*b;
	 printf("\nmul of %d & %d is: %d",a,b,mul);
	}
	void div()
	{
	 int a=15,b=10,div;
	 div=a/b;
	 printf("\ndiv of %d & %d is: %d",a,b,div);
	}