#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
	char package, A, B, C;
	double price, hours;
	
	cout << "Select the package purchased: " 
	<< "\nA=P995" << "\nB=P1495" << "\nC=P1995" << endl << "\nPackage ";
	cin >> package;
	
	while (package!='A' && package!='B' && package!='C')
	{
		cout << "Error. You must select from the the three listed packages";
		return 0;
	}
	
	cout << "Enter the number of hours consumed: ";
	cin >> hours;
	
	while (hours<0)
	{
		cout << "Hours cannot be negative";
		return 0;
	}
	
	if (package=='A') {
		if (hours>10) {
			price = (995) + (hours-10)*20;
	} else { 
		price = 995;
	}
	}
	
	if (package=='B') {
		if (hours>20) {
			price = (1495) + (hours-20)*10;
	} else { 
		price = 1495;
	}
	}
	
	if (package=='C') {
		price = 1995;
	}
	
	cout << "Your monthly bill is: P" << price;

	getch();
	return 0;
}
