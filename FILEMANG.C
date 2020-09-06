	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 FILE *f1;
	 char c;
	 clrscr();
	 printf("data input output");
	 f1=fopen("input","w");
	 while((c=getchar())!='0')
	 {
	  putc(c,f1);
	 }
	 fclose(f1);
	 printf("\ndata output\n");
	 f1=fopen("input","r");
	 while((c=getc(f1))!=EOF)
	 {
	  printf("%c",c);
	 }
	 fclose(f1);
	 getch();
	}
