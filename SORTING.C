	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int t,i,j,k,a[3][3],n=3;
	 clrscr();
	 printf("enter elements:");
	 for(i=0;i<n;i++)
	 {
	  for(j=0;j<n;j++)
	  {
	   scanf("%d",&a[i][j]);
	  }
	 }
	 for(i=0;i<n;i++)
	 {
	  for(j=0;j<n;j++)
	  {
	   for(k=0;k<(n-j-1);k++)
	   {
	    if(a[i][k]>a[i][k+1])
	    {
	     t=a[i][k];
	     a[i][k]=a[i][k+1];
	     a[i][k+1]=t;
	    }
	   }                             d
	  }
	 }
	 printf("after shorting matrix:\n");
	 for(i=0;i<n;i++)
	 {
	  for(j=0;j<n;j++)
	  {
	   printf("%d\t",a[i][j]);
	  }
	  printf("\n");
	 }
	 getch();
	}