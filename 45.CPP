#include<fstream.h>
#include<iostream.h>
#include<conio.h>
int main()
{
	char data[100];
	clrscr();
	ofstream outfile;
	outfile.open("som.txt");
	cout<<"something wrinting in file:";
	cin.getline(data,100);
	outfile<<data<<endl;
	outfile.close();
	getch();
	return 0;
}
