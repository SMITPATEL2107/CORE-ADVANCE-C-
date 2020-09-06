	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int i,j,a[2][2],b[2][2],sum[2][2];
	 clrscr();
	 printf("\nenter element of 1 metrix");
	 for(i=0;i<2;i++)
	 {
	  for(j=0;j<2;j++)
	  {
	   printf("enter element:");
	   scanf("%d",&a[i][j]);
	   }
	  }
	  printf("\nenter element of 2 metrix");
	  for(i=0;i<2;i++)
	 {
	  for(j=0;j<2;j++)
	  {
	   printf("enter element:");
	   scanf("%d",&b[i][j]);
	   }
	  }
	  for(i=0;i<2;i++)
	 {
	  for(j=0;j<2;j++)
	  {
	   sum[i][j]=a[i][j]+b[i][j];
	   }
	  }
	  printf("sum of two metrix\n");
	  for(i=0;i<2;i++)
	 {
	  for(j=0;j<2;j++)
	  {
	   printf("%d\t",sum[i][j]);
	   }
	   printf("\n");
	  }



	  getch();
	  }