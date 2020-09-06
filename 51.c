#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum;
	int *p,*q;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	sum=*p+*q;
	printf("sum=%d",sum);
	getch();
}
