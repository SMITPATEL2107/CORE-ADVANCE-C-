#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1;
	char c;
	f1=fopen("akash.txt","r");
	if(f1==NULL)
	{
		printf("cannot open file\n");
	}
	getch();
}
