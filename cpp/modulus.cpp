#include <iostream>
using namespace std;


int main(){
	int num,val1,val2;
	cout << "This is a program to show the remainder by division." << endl << "Please enter the numbers." << endl;
	cin >> val1;
    cout << endl;
    cin >> val2;
    num = val1 % val2;
    cout << "The remainder is " << num << endl << "Thankyou.";
	
	return 0;
}
