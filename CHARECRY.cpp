#include<iostream.h>
#include<conio.h>
void main()
{
	char input,output;
	int iploc,oploc,charloc;
	clrscr();

	cin>>input;
	cin>>iploc;

	if(iploc>26)
	{
		iploc = iploc - 26;

	}

	charloc = input;
	oploc = charloc;
	cout<<("",oploc);

	getch();
}