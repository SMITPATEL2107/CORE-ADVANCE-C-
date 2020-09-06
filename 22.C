#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[10],sum=0,ave=0;
	clrscr();
	for(i=0;i<10; i++)
	{
	printf("\nenter number");
	scanf("%d",&a[i]);
	printf("\n%d",a[i]);
	sum=sum+a[i];
	ave=sum/10;
	}
	printf("\nsum is:%d",sum);
	printf("\nave is:%d",ave);
	getch();
}