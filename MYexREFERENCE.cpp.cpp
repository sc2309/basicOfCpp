#include <iostream>
using namespace std;


int main(){
	double r = 3.14 , &ri = r;
	cout << "The value of r is " << r << endl << "The value of ri is " << ri << endl ;
	if(r == ri){
		cout << "They are same and are working properly.";
	}
	else{
		cout << "They are not same.";
	}
	return 0;
}
