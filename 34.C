#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[50];
	int i,count;
	clrscr();
	count=1;
	printf("Enter a string::");
	gets(str);
	printf("\nString is :: %s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("\nWords are :: %d",count);
	getch();
}