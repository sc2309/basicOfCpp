#include <iostream>
using namespace std;
int main()
{
	// A character enclosed within single quotes is a literal of type char. Zero or more character enclosed in double quotation marks is a string literal.
	// example : character literal  'a' and string literal  "Sarthak Chouksey.".
	// \o is the null character which is added at the end of the string literal.
	// \n new line , \t horizontal tab , \b backspace , \" double quote , \' single quote ,\\ backslash , \? question mark , \r curson return , \a alert (bell) 
	cout << "This is followed by a new line \n and after this I want a horizontal tab \t. Now here I want a backslash \\ and I want to write this word in \"double quote\" and this in \'single quote\'.Let us see if all this works correctly \? .Let us see if you can hear this \a " << endl;
	cout << "All worked correctly ";
	return 0;
}
