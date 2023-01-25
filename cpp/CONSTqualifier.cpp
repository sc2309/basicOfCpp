#include <iostream>
using namespace std;


int main(){
	// SOMETIMES WE NEED TO DEFINE A VARIABLE WHOSE VALUE CANNOT BE CHANGED HERE WE USE CONST QUALIFIER.
	// TO WRITE THIS WE MAY PUT CONST BEFORE DATA TYPE OF AN IDENTIFIER.
	// LIKE EX . const int b = 1024;
	int a = 78;
	const int i = a;
	int b = i;
	cout << "The value of i = " << i << endl << "The value of a = " << a << endl << "The value of b = " << b << endl;
	a = 50;
	b = 51;
	cout << "The new value of i = " << i << endl << "The new value of a = " << a << endl << "The new value of b = " << b << endl;
	return 0;
	// TO ACCESS THE CONS VAR IN OTHER FILES JUST ADD EXTERN BEFORE CONST WITH A FUNCTION.LIKE THIS EXTERN CONST INT I ( ANY VARIABLE ) = FNC();
	// AND IN OTHER FILL TYPE 'EXTERN CONST INT I ( ANY VARIABLE) ;'
}
