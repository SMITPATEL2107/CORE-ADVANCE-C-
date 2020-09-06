#include<stdio.h>
#include<conio.h>
struct employee
{
	int empno,age;
	char name[20],address[100];
};
void main()
{
	struct employee s1[5];
	int i;
	for(i=0;i<5;i++)
	{
	printf("\nenter empno.");
	scanf("%d",&s1[i].empno);
	printf("enter empname:");
	scanf("%s",s1[i].name);
	printf("enter address:");
	scanf("%s",s1[i].address);
	printf("enter age:");
	scanf("%d",&s1[i].age);
	printf("emp no:%d\nemp name:%s\naddress:%s\nage:%d",s1[i].empno,s1[i].name,s1[i].address,s1[i].age);
	}
	getch();
}
