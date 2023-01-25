//  LIKE REFERENCES WE CAN ALSO DEFINE POINTERS THAT POINT TO EITHER CONST OR NONCONST TYPES.
//  LIKE A REFERNECE TO CONST, A POINTER TO CONST MAY NOT BE USED TO CANGE THE OBJECT TO WHICH THE POINTER POINTS.
//  TO STORE ADDRESS OF A CONST WE MAY ONLY USE POINTERS TO CONST.
//  * IS ASTERISK SYMBOL.
//  CONST POINTERS BE LIKE int *const val = dval; // val will always point to dval
/*  AND ANOTHER WAY IS     const double pi = 3.14159;
                           const double *const pipi = &pi;
                           here first const means the pointer will only point to const type. *const means it is a constant pointer.
                           
*/
#include <iostream>
using namespace std;


int main(){
	const int val = 5;
	int const *dval = &val;
	cout << "The value of val is " << *dval << endl;
	const double pi = 3.14159;
	const double *const pipi = &pi;
	cout << "the value of pi is " << *pipi << endl;
}

