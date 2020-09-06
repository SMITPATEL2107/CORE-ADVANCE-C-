	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int a,b,c;
	 clrscr();
	 printf("enter three numbers:");
	 scanf("%d%d%d",&a,&b,&c);
	 if(a>b)
	 {
		if(a>c)
		{
		printf("\n%d is maximum",a);
		}
	 }
	 else if(b>a)
	 {
	 if(b>c)
	 {
	 printf("\n%d is maximum",b);
	 }
	 }
	 else
	 {
	 printf("\n%d is maximum",c);
	 }


	 getch();
	}