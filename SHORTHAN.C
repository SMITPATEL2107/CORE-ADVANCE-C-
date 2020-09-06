	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int a,b,sum,sub,mul,div;
	 clrscr();
	 a=20;
	 sum=1;
	 sub=1,div=1,mul=1;
	 sum+=a;
	 sub-=a;
	 mul*=a;
	 div/=a;
	 printf("a=%d",a);
	 printf("\na+b=%d",sum);
	 printf("\na-b=%d",sub);
	 printf("\na*b=%d",mul);
	 printf("\na/b=%d",div);
	 getch();
	 }
