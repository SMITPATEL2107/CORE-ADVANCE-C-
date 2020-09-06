#include<iostream.h>
#include<conio.h>
int main()
{
 int a[3],i;
 clrscr();

 for(i=0;i<3;i++)
 {
 cout<<"enter element";
 cin>>a[i];
 }
 for(i=0;i<3;i++)
 {
 cout<<"element is:";
 cout<<a[i]<<endl;
 }
 getch();
 return 0;
}