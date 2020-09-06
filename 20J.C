#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n,sum;
	clrscr();
	printf("enter value\n");
	scanf("%d",&n);
	n2=n%10;
	n1=n;
	while(n>=10)
	{
	n=n/10;
	}
	n1=n;
	sum=n1+n2;
	printf("\nsum of first and last digit= %d",sum);
	getch();
}