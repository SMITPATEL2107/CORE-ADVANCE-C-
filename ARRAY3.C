	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int i,ele[10]={1,2,3,4,5,6,7,8,9,10},odd=0,even=0;
	 clrscr();
	 for(i=0;i<10;i++)
	 {
	  printf("%d,",ele[i]);
	 }
	 for(i=0;i<10;i++)
	 {
	  if(ele[i]%2==0)
	  {
	   even++;
	  }
	  else
	  {
	   odd++;
	  }
	 }
	 printf("\neven count:%d",even);
	 printf("\nodd count:%d",odd);
	 getch();
	}