#include <iostream>
using namespace std;


int main(){
	// EACH IDENTIFIER WHICH IS A REFERENCE SHOULD START WITH '&' SYMBOL.
	int ival = 1024;
	int &refval = ival;
	cout << "ival = " << ival << endl << "refval = " << refval << endl;
	refval = 1000;
	cout << "New ival = " << ival << endl << "New refval = " << refval;
	return 0;
}
