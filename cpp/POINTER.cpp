// POINTER IS A COMPOUND TYPE THE POINTS TO THE ANOTHER TYPE.
// TEY ARE USED FOR INDIRECT ACCESS TO THE ANOTHER OBJECT.
// POINTERS ARE ALWAYS STARTED WITH '*' SYMBOL BEFORE THE NAME.
// FOR EXAMPLE :- int ival = 50;
//                int *p = &ival ; [HERE & IS USED BECAUSE TO FIND THE ADDRESS OF THE OBJECT.AS POINTER HOLDS THE ADDRESS OF AN OBJECT.]
#include <iostream>
using namespace std;


int main(){
	int ival = 50;
	int *p = &ival;
	cout << p << endl;// HERE THIS PRINTS ADDRESS OF IVAL.
	cout << *p ; // HERE THIS PRINTS VALUE OF IVAL.
    return 0;
}
