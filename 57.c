#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1;
	char c;
	printf("data input\n");
	f1=fopen("akash1.txt","w");
while((c=getchar())!='0')
{
	putc(c,f1);
}
fclose(f1);
printf("\nData output\n");
f1=fopen("akash1.txt","r");
while((c=getc(f1))!=EOF)
{
	printf("%c",c);
}
	fclose(f1);
}
