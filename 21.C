#include<stdio.h>
#include<conio.h>
void main()
{
	int i,even_cnt=0,odd_cnt=0,a[10];
	clrscr();
	for(i=0;i<10;i++)
	{
	printf("\nenter number ");
	scanf("%d",&a[i]);
	printf("enterd number is:%d",a[i]);
	if(a[i]%2==0)
	{
	even_cnt++;
	}
	else
	{
	odd_cnt++;
	}

	}
	printf("\n\neven number are:%d\nodd number are%d",even_cnt,odd_cnt);
	getch();
}

