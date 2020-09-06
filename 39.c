#include<stdio.h>\
#include<conio.h>
int squ()
{
		int a,square;
		printf("enter number\n");
		scanf("%d",&a);
		square=a*a;
		return square;
}
int cu()
{
		int a,cube;
		printf("\nenter number\n");
		scanf("%d",&a);
		cube=a*a*a;
		return cube;
}
void main()
{
		int a,square,cube;
		square=squ();
		printf("%d",square);
		cube=cu();
		printf("%d",cube);
		getch();
}
