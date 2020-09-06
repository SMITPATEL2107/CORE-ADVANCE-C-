
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp,a[5];
	clrscr();
	for(i=0;i<5;i++)
	{
	printf("\nenter number");
	scanf("%d",&a[i]);
	printf("\n%d",a[i]);
	for(j=j+1;j<5;j++)
	{
	if(a[i]>a[j])
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	printf("%d",a[j]);
	}
	}
	}
	printf("\naccending order is:");
	for(i=0;i<5;++i)
	{
	printf("%d,",a[i]);
	}

	getch();
}
