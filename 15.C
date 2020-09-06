	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int a,b,c;
	 clrscr();
	 printf("enter three numbers:");
	 scanf("%d%d%d",&a,&b,&c);
	 printf("\na is :%d",a);
	 printf("\nb is :%d",b);
	 printf("\nc is :%d",c);
	 if(a>b)
	 {
	  if(a>c)
	  {
	   printf("\na is max number");
	  }
	 }
	 else if(b>c)
	 {
	  if(b>a)
	  {
	   printf("\nb is max number");
	  }
	 }
	 else
	 {
	 printf("\nc is max number");
	 }

	/* if(c>a)
	 {
	  if(c>b)
	  {
	   printf("\nc is max number");
	  }
	 }*/
	 getch();
	}