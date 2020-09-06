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
	 if(per>75)
	 {
	  printf("\ndistinction");
	 }
	 else if(per>60&&per<=75)
	 {
	  printf("\nfirst class");
	 }
	 else if(per>50&&per<=60)
	 {
	  printf("\nsecond class");
	 }
	 else if(per>35&&per<=50)
	 {
	  printf("\npass");
	 }
	 else
	 {
	  printf("\nfail");
	 }
	 getch();
	}
