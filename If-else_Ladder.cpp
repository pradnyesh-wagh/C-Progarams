#include<iostream.h>
#include<conio.h>
void main()
{
	int ono,qty,bill=0;
	clrscr();
	cout<<"\n*** MENU ***";
	cout<<"\n1. Ice Cream";
	cout<<"\n2. Cone";
	cout<<"\n3. Pestries";
	cout<<"\n4. Exit";
	cout<<"\nEnter the Order No:";
	cin>>ono);
	cout<<"\nEnter the Quantity:";
	cin>>qty);
	if(ono==1)
	{
		cout<<"\nYour order is Ice Cream with Price 25/- Rs.";
		bill=qty*25;
	}
	else if(ono==2)
	{
		cout<<"\nYour order is Cone with Price 35/- Rs.";
		bill=qty*35;
	}
	else if(ono==3)
	{
		cout<<"\nYour order is Pestries with Pricw 45/- Rs.";
		bill=qty*45;
	}
	else if(ono==4)
	{
		cout<<"\nThank You for VISIT!!!";
	}
	else
	{
		cout<<"\nInvalid Order Number";
	}
	cout<<"\nTotal Bill=",bill;
	getch();
}