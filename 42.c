#include<stdio.h>
#include<conio.h>
max(int[],int);
void main()
{
	int a[]={30,20,50,60,35};
	int m,n;
	m=max(a,n);
	printf("max number:%d",m);
	getch();	
}
max(int x[],int k)
{
	int t,i;
	t=x[0];
	for(i=1;i<k;i++)
	{
		if(x[i]>t)
		t=x[i];
	}
	return(t);
}
	
