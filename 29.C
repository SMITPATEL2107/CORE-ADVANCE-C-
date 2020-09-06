	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int a[2][2],b[2][2],c[2][2],i,j;
	 clrscr();
	 printf("enter elements of a matrix:");
	 for(i=0;i<2;i++)
	 {
	  for(j=0;j<2;j++)
	  {
	   scanf("%d",&a[i][j]);
	  }
	 }
	 printf("\nenter element for b matrix:");
	 for(i=0;i<2;i++)
	 {
	  for(j=0;j<2;j++)
	  {
	   scanf("%d",&b[i][j]);
	  }
	 }
	 printf("\nsub of two matrix\n");
	 for(i=0;i<2;i++)
	 {
	  for(j=0;j<2;j++)
	  {
	   c[i][j]=a[i][j]-b[i][j];
	   printf("\t%d",c[i][j]);
	  }
	  printf("\n");
	 }
	 getch();
	}
