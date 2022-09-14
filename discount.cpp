#include<iostream>
using namespace std;


int main()
{
	int totalexp, qty, price, discount;

	cout<<"Enter quantity:";
	cin>>qty;
	cout<<"Enter price:";
	cin>>price;

	totalexp=qty*price;

	if(totalexp>1000)
	{
		discount=(totalexp*0.1);
		totalexp=totalexp-discount;
	}

	cout<<"Total Expense is  Rs. "<<totalexp;


	return 0;
}
