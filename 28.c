#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2],i,j,m,n;
	printf("enter number of row and column\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of first matrix");
	for(i=0;i<m;i++)
	{
	
		for(j=0;j<n;j++)
		{
	
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the element of second matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{

		scanf("%d",&b[i][j]);
		}
	}
	printf("sum of enter matrix\n");
	for(i=0;i<m;i++)
	{	
		for(j=0;j<n;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
		getch();
}
