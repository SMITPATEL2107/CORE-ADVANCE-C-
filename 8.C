	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int s1,s2,s3,s4,s5,sum=0;
	 float per;
	 clrscr();
	 printf("enter five subject marks:");
	 scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	 sum=s1+s2+s3+s4+s5;
	 per=sum/5;
	 printf("\nsum of five subjectis: %d",sum);
	 printf("\npercentage=%f",per);
	 getch();
	}
