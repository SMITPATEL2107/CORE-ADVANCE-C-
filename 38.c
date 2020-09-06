#include<stdio.h>
#include<conio.h>
int add()
{
	int a,b,sum;
	printf("enter two number\n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	return sum;
}
int minus()
{
	int a,b,sub;
	printf("\nenter two number\n");
	scanf("%d %d",&a,&b);
	sub=a-b;
	return sub;
}
int multiply()
{
		int a,b,multi;
		printf("\nenter two number\n");
		scanf("%d %d",&a,&b);
		multi=a*b;
		return multi;
}
int division()
{
		int a,b,div;
		printf("\nenter two number\n");
		scanf("%d %d",&a,&b);
		div=a/b;
		return div;
}
void main()
{
		int sum,sub,multi,div;
		sum=add();
		printf("%d",sum);
		sub=minus();
		printf("%d",sub);
		multi=multiply();
		printf("%d",multi);
		div=division();
		printf("%d",div);
		getch();
}

