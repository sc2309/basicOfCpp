// A CONSTANT EXPRESSION IS A EXPRESSION WHOSE VALUE CANNOT BE CHANGED AND THAT CAN BE EVALUATED AT COMPILE TIME.
// A LITERAL IS A CONSTANT EXPRESSION.
// A CONST OBJECT THAT IS INITIALISED FROM A CONSTANT EXPRESSION IS ALSO A CONSTANT EXPRESSION.
// EX. const int max_files = 20;     // max_files is a constant expression. 
//     const int limit = max_files + 1; // limit is a constant expression.
// IN A LARGE SYSTEM, IT CAN BE DIFFICULT TO DETERMINE (FOR CERTAIN) THAT AN INTIALIZER IS A CONSTANT EXPRESSION.THEN WE ASK THE COMPILER TO VERIFY THAT IS IT A CONSTANT EXPRESSION BY DECLARING THE VARIABLE IN A CONSTEXPR DECLARAION.
// 
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(){
	constexpr int mf = 100;      // 100 is a constant expression.
	constexpr int limit = mf + 1;
	cout << "The value of mf is " << mf << endl << "The value of limit is " << limit << endl;
	
	return 0;
}
