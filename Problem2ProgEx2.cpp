#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double gallons, unpaid, total;
	
	cout << "Enter unpaid amount from previous month: Php.";
	cin >> unpaid;
	cout << "Enter gallons consumed in the current month: ";
	cin >> gallons;
	
	if (unpaid<0) {
		cout << "\nInvalid Input!";
		return 0;
	}
	if (gallons<0) {
		cout << "\nInvalid Input!";
		return 0;
	}
	else if (unpaid>0) {
		total = 55 + (1.1*gallons) + unpaid;
		cout << "\nYour total water bill is: Php." << total;
	}
	else {
		total = 35 + (1.1*gallons);
		cout << "\nYour total water bill is: Php." << total;
	}
	
	getch();
	return 0;	
}
