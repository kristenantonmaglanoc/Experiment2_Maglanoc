#include <iostream> 
#include <conio.h>
using namespace std;

void fiboSequence (int x) { 
	int f[x];   
    int i; 
    f[0] = 0; 
    f[1] = 1; 
   
    for (i = 2; i < x; i++) { 
       f[i] = f[i-1] + f[i-2]; 
    }  
    for (i = 0; i < x; i++) { 
       cout << f[i] <<", ";
    }
} 
int main () { 
	cout << "Fibonacci Numbers\n\n";

    int x = 22; 
    fiboSequence(x); 
   
    getch(); 
	return 0; 
} 
