#include<iostream>
using namespace std;

int main()
{
	int i, j, side;
	
	cout << "\nPlease Enter Any Side of Square  =  ";
	cin >> side;	
	
	cout << "\n-----Square Star Pattern-----\n";
	for (i = 0; i < side; i++)
	{
		for (j = 0; j < side; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
 	return 0;
}
