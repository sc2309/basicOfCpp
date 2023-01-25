#include <iostream>
using namespace std;

int reused = 42; // THIS IS A GLOBAL SCOPE.

int main(){
	// NESTED SCOPES ARE THE SCOPES WHICH ARE INSIDE TE CONTAINING SCOPE.
	int unique = 0;
	cout << reused << " " << unique << endl;// HERE GLOBAL SCOPE REUSED IS USED.
	int reused = 0; // THIS IS A BLOCK SCOPE.
	cout << reused << " " << unique << endl; // HERE BLOCK SCOPE REUSED IS USED.
	cout << ::reused << " " << unique << endl; // HERE GLOBAL SCOPE REUSED IS USED.
	                                           // :: IS A SCOPE OPERATOR.
	return 0;
}
