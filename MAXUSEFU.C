	#include<stdio.h>
	#include<conio.h>
	int large (int ar[],int n);
	void main()
	{
	 int ar[50],n,i,max;
	 clrscr();
	 printf("enter a number of elements:");
	 scanf("%d",&n);
	 printf("enter elements in array:");
	 for(i=0;i<n;i++)
	 {
	  scanf("%d",&ar[i]);
	 }

	 max=large(ar,n);
	 printf("largest element in array is: %d",max);
	 getch();
	}

	int large(int ar[],int n)
	{
	 int lg,i;
	 lg=ar[0];
	 for(i=1;i<n;i++)
	 {
	  if(lg<ar[i])
	    {
	      lg=ar[i];
	    }
	 }
	 return lg;
	}
