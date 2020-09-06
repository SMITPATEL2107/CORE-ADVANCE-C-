#include<stdio.h>
#include<conio.h>
void add(int *a,int *b)
	{
	 int sum;
	 sum=(*a)+(*b);
	 printf("%d",sum);
	}
void main()
{
 int a,b;
 clrscr();
 a=12,b=19;
 add(&a,&b);
 getch();
}