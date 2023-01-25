#include <iostream>
using namespace std;

int plusFUNC(int x,int y){
	return x + y;
}

double plusFUNC(double x,double y){
	return x + y;
}

int main(){
	int mynum1 = plusFUNC(8,10);
	double mynum2 = plusFUNC(4.7,6.156);
	cout << "Int: " << mynum1 << endl;
	cout << "Double: " << mynum2 ;
	return 0;
}
