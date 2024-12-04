#include<iostream>
using namespace std;
int main(){
	int income,expences,balance,sel;
	do
	{
		cout<<"Welcome sir,We're here to help you.\nPress 1 to add income.\nPress 2 to expenses.\nPress 3 to view balance.\nPress 4 to Exit.\n";
		cin>>sel;
		switch(sel)
		{
			case 1:
				cout<<"Enter How much money,You want to add:";
				cin>>income;
				if(income>0){
				balance=balance+income;
				cout<<"Added.\n";
				}
				else
				cout<<"invalid value";
				break;
			case 2:
				cout<<"Enter How much money you spend:";
				cin>>expences;
				if(balance>=expences){
				balance=balance-expences;
				cout<<"Remaining balance:"<<balance<<"\n";
				}
				else
				cout<<"insufficient balance.\n";
				break;
			case 3:
				cout<<balance<<"\n";
				break;
			default:
				cout<<"invalid input";
		}
	}while(sel!=4);
	cout<<"You're remaining balance is "<<balance<<" \nBye Sir! Have a great day ahead.";
	
}

