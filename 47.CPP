#include<fstream.h>
#include<iostream.h>
#include<conio.h>
int main()
{
	char data[100];
	clrscr();
	ofstream outfile;
	outfile.open("nath.txt");
	cout<<"something wrinting in file:";
	cin.getline(data,100);
	outfile<<data<<endl;
	outfile.close();

	ifstream infile;
	infile.open("nath.txt");
	infile>data;
	cout<<data<<endl;
	infile.close();
	getch();
	return 0;
}