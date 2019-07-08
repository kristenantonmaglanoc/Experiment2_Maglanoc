#include <iostream>
#include <conio.h>
using namespace std;

char answer;
int n;

int findSum(int n) 
{ 
    int sum = 0; 
	for (int x=1; x<=n; x++)  
    	sum = sum + x; 
    return sum; 
} 
   
int main() 
{ 
	bool repeat = true;
    while (repeat) {
	
	cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The sum of all whole numbers from 1 to " << n << " is " << findSum(n) << endl << endl;
   
    cout << "Enter 'Y' to continue or any other key to stop: ";
    cin >> answer;
    repeat = answer == 'Y';
    
    	cout << "\nThank you!\n" << endl;
	}
	getch();
    return 0;
  
}
  
  



	
