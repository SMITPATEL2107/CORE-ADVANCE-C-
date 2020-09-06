#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,total,percentage;
	clrscr();
	printf("enter 5 subject mark\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	printf("total mark=%d",total);
	percentage=(a+b+c+d+e)/5;
	printf("\npercentage is %d",percentage);
	if(percentage>75)
	{
	printf("\ndistinction");
	}
	else if(percentage>60 && percentage<=75)
	{
	printf("\nfirst class");
	}
	else if(percentage>50 && percentage<=60)
	{
	printf("\nsecond class");
	}
	else if(percentage>35 && percentage<=50)
	{
	printf("\nthird class");
	}
	else
	{
	printf("\nfail");
	}
	getch();
}