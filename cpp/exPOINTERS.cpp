#include <iostream>
using namespace std;


int main(){
	int ival = 50;
	int *p = &ival;
	cout << "ival = " << ival << endl << "p = " << p << endl << "*p = " << *p << endl;
	*p = 51;
	cout << "new ival = " << ival << endl << "new p = " << p << endl << "new *p = " << *p << endl;
	ival = 52;
	cout << "new new ival = " << ival << endl << "new new p = " << p << endl << "new new *p = " << *p << endl;
	return 0;
	// int *p = nullptr; , int *p = NULL; , int *p = 0; are null pointers which do not point to any object.
} 
