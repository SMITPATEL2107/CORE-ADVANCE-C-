	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 char a[10],b[10];
	 int i;
	 clrscr();
	 printf("enter string a:");
	 scanf("%s",a);

	 for(i=0;a[i]!='\0';i++)
	 {
	  b[i]=a[i];
	 }
	 b[i]='\0';
	 printf("string b: %s",b);
	 getch();
	}
