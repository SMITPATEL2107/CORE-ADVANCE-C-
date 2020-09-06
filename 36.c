#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,l,flag,count=0;
	char str1[20],rev[20];
	printf("enter string:");
	scanf("%s",str1);
	l=strlen(str1);
	while(str1[count] !='\0')
	count++;
	
	j=count-1;
	
	for(i=0;i<count;i++)
	{	
	rev[i]=str1[j];
	j--;
	}

	rev[i]= '\0';
	printf("%s",rev);
		for(i=0;i<l;i++)
		{
			if(str1[i]!=str1[l-i-1])
			flag=1;
			l--;
			break;
			
		}


	if(flag==0)
	{ 
		printf("\npelindrom");
	}
	else
	{
		printf("\nnot pelindrom");
	}
	getch();
}
