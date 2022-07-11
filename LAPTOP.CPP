#include<iostream.h>
#include<conio.h>
class laptop
{
		private:
			int modelno;
			char companyname;

	public:
			float price;

			void input()
			{
						cout<<"\nEnter the modelno";
						cin>>modelno;
						cout<<"\nEnter the company name";
						cin>>companyname;
						cout<<"\nEnetr the price=";
						cin>>price;
			}
	
			void output()
			{
					cout<<"\n******LAPTOP INFORMATION******";
					cout<<"\nmodelno="<<modelno;
					cout<<"\ncompanyname="<<companyname;
					cout<<"\nprice="<<price;
					cout<<"\nmodelno="<<modelno;

	}
};
void main()
{

	int add=0;
	laptop l1,l2,l3;
	clrscr();
	l1.input();
	l1.output();
	l2.input();
	l2.output();
	l3.input();
	l3.output();
	

	add=add+l1.price+l2.price+l3.price;
	cout<<"\ntotal="<<add;

	getch();

}
