#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
		char s1[100],s2[100];
		int i;
		printf("enter string\n");
		scanf("%s",&s1);
		for(i=0;s1[i] !='\0';i++)
		{
			s2[i]=s1[i];
		}
		s2[i]='\0';
		printf("copy string:%s",s2);
		getch();
		
}
