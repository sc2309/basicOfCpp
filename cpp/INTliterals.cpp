#include <iostream>
using namespace std;
int main()
{
	// Decimal are normal representation like 25 just 25
	//integer literal that begin with 0(zero) are known as Octal ex. (011 group 1) (001 group 2) 011001 = 31 octal of 031 = 031 which is nothing but 25. 
	//binary equivalent of 25 = 11001 or 011001 1 zero can be added before it dosen't change value.
	// to convert 011001 to 031 we need to divide in equal group then convert it to decimal like if we convert 011 to decimal it is equal to 3 and 001 is equal to 1 hence, 031.
	// integer literalls that begin with either 0(zero)x or 0(zero)X are known as hexadecimal.
	// and in hexadecimal binary equivalent of 25 is (0001 group 2)(1001 group 2)converting this to decimal gives value 1 , 9 is hexadecimal it is written as 0x19 = 25 in 00011001 it is 11001 we just added three 0s in begining.
	int o,m,n;
	o = 25; 
	m = 031;
	n = 0x19;
	cout << o << endl << m << endl << n;
	return 0;
    	
}
