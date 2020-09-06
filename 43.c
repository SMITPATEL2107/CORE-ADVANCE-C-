 #include<stdio.h>
#include<conio.h>
void sort(int a[])
{

	int i,j,temp;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		if(a[j]>a[i])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
		}	
	}
	for(j=0;j<10;j++)
	{
	printf("%d",a[j]);
	}
}

void main()
{
	int a[]={5,3,6,8,10,2,23,12,5,1};
	sort(a);
	getch();
}

