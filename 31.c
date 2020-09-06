#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,max=0;
	int m[2][2]={1,6,7,2};
	printf("enter element of matrix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(m[i][j]>max)
			max=m[i][j];
		}	
	}
		printf("maximum number of matrix:%d",max);
	
	getch();
	
}
