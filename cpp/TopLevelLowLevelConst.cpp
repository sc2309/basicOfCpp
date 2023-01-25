// TOP LEVEL CONST - INDICATE THAT THE POINTER ITSELF IS A CONST.
// LOW LEVEL CONST - WHEN A POINTER CAN POINT TO A CONST OBJECT, WE REFER TO THAT CONST AS A LOW LEVEL CONST.
// POINTERS CAN HAVE BOTH TOP LEVEL CONST AS WELL AS LOW LEVEL CONST INDEPENDENTLY.
// THE DISTINCTION BETWEEN TOP LEVEL AND LOW LEVEL MATTERS WHEN WE COPY AN OBJECT.
// WHEN WE COPY AN OBJECT,TOP LEVEL CONSTS ARE IGNORED. WHILE LOW LEVEL CONST ARE NEVER IGNORED.
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(){
	int i = 525;
	int *const p1 = &i; // here const is a top level const.
	cout <<"the value of i = " << *p1 << endl;
	const int j = 524;
	const int *p2 = &j; // here const is a low level const as p2 can be changed. p2  can point only to const objects. 
	cout << "The value of j = " << *p2;
	const int *const p3 = p2; // right most const is top level, left most is not.
	cout << endl << "The value of p2 = " << *p3;
	const int &r1 = j; // const in reference types is always low-level.
	cout << endl << "The value of r1 = " << r1;
	return 0;
}
