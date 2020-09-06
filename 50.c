#include<stdio.h>
#include<conio.h>
struct marks
{
	int sub;
};
struct student
{
	int rollno;
	char name[10];
	struct marks m[3];
};
void main()
{
	struct student s1[5];
	int i,j,total=0;
	float per;
	for(i=0;i<5;i++)
	{
		printf("\n\nenter your rollno.");
		scanf("%d",&s1[i].rollno);
		printf("enter student name");
		scanf("%s",s1[i].name);
		printf("\nroll no %d",s1[i].rollno);
		printf("\nstudent name %s",s1[i].name);
	for(j=0;j<3;j++)
	{
		printf("\nenter your mark");
		scanf("%d",&s1[i].m[j].sub);
	printf("marks %d",s1[i].m[j].sub);
	total=total+s1[i].m[j].sub;
	per=total/3;
	}
		printf("\ntotal mark is:%d",total);
		printf("\npercentage is:%f",per);
	}
	getch();
}
