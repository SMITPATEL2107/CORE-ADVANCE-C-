#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[]="AKASH";
	int count=0;
	clrscr();
	while(str1[count] |='\0')
	count++;
	printf("\nthe length of the sting \"%s\" is %d character s.",str1,count);
	getch();
}