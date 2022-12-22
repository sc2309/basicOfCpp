#include <iostream>
using namespace std;
int main()
{
	//floating point literals include scientific notation which are E or e. ex. 3.14159E2 -> 3.141559 x 10 raised to the power 2 -> 314.159 or 3.141559 x 10 raised to the power -1 -> 0.314159.
    float o,m,n,p;
	o = 3.14159;
	m = 3.14159E2;
	n = 3.14159e3;
	p = 3.14159E-1;
	
	cout << o << endl << m << endl << n << endl << p;	
	
}
