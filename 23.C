	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int i,a[10],max=0;
	 clrscr();
	 for(i=0;i<10;i++)
	 {
	  printf("\nenter element:");
	  scanf("%d",&a[i]);
	  printf("element is :%d",a[i]);
	  if(max<a[i])
	  {
	   max=a[i];
	  }
	 }
	  printf("\nmax num is :%d",max);
	 getch();
	}
