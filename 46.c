#include<stdio.h>
#include<conio.h>
int rev(int num);
void main()
{
	int num,sum;
	printf("enter any number\n");
	scanf("%d",&num);
	sum=rev(num);
	if(num==sum)
	{
	printf("given number is palindrome");
	}
	else
	{
	printf("given number is not palindrome");
	}
	return 0;
	getch();
}
	int rev(int num)
	{
		int rem;
		static int sum=0;
		if(num>0)
		{
		rem=num%10;
		sum=sum*10+rem;
		rev(num/10);
		}
		return(sum);
	
	}
	
