#include <iostream>
using namespace std;

void swapNums(int &x,int &y){
	int z = x;
	x = y;
	y = z;
}

int main(){
	int firstNum = 9;
	int secondNum = 6;
	
	cout << "Before Swap :- " << firstNum << secondNum << endl;
	
	swapNums (firstNum , secondNum);
	
	cout << "After Swap :- " << firstNum << secondNum << endl;
	
	return 0;
}
