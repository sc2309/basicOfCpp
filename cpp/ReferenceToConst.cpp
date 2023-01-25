// REFERENCE TO CONST  :--   AS WITH ANY OTHER OBJECT, WE CAN BIND A REFERENCE(IT IS BINED WITH DIFFERENT DATA TYPES) TO AN OBJECT OF A CONST TYPE.
// UNLIKE AN ORDINARY REFERENCE, A REFERENCE TO CONST CANNOT BE USED TO CHANGE THE OBJECT TO WHICH THE REFERENCE IS BOUND.
// non const reference cannot be bound to const object.
// WE CAN BIND A REFERENCE TO CONST TO A NON CONST OBJECT, A LITERAL, OR A MORE GENERAL EXPRESSION.
// GENERAL EXPRESSION CAN BE ' &r1 = r * 2; r = 5 ' but normal reference cannot do this. 
// literals can be any number.
/*

    TO SOLVE A PROBLEM LIKE 
	                        double dval = 3.14;
                            const int &ri = dval;                              
    
	WE CAN DO THIS BY 
	                    double dval = 3.14;
	                    int temp = dval;
	                    const int &ri = temp;

*/
#include <iostream>
using namespace std;


int main(){
	const int i = 45;
	const &val = i;
	cout << "The value of i = " << val << endl;
	int j = 10;
	const &val2 = j;
	cout << "The value of j = " << val2 << endl;
	
	return 0;
} 
