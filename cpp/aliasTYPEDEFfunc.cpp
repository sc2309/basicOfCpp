// A TYPE ALIAS IS A NAME THAT IS A SYNONYM FOR ANOTHER TYPE. IT IS USED BECAUSE IT SIMPLIFIES COMPLICATED TYPE DEFINITIONS, MAKING THEM EASIER TO USE.
//  ALSO IT LETS US EMPHASIZE THE PURPOSE FOR WHICH A TYPE IS USED.
// SYNTAX 1 :- typedef double wages;               // wages is a synonym for double.
// OR          typedef float percent;              // percent is a synonym for double. 
// SYNTAX 2 :- using char = letter ;               // letter is a synonym for char.
// OR using int = num;                             // num is a synonym for int
#include <iostream>
using namespace std;


int main(){
	typedef double earnings;
	typedef float appsBuild;
	earnings e1 = 150000;
	earnings e2 = 550000;
	appsBuild a1 = 5;
	appsBuild a2 = 10;
	cout << "The earnings of employ 1 is " << e1 << endl;
	cout << "The number of apps build in a month by employ 1 is " << a1 << endl;
	cout << "The earnings of employ 2 is " << e2 << endl;
	cout << "The number of apps build in a month by employ 2 is " << a2 << endl;
		
	return 0;
} 

