#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;	

int main(){
	int number,jackpot = rand()%3;
	cout << "The number is between 0 to 3." << endl;

	cin >> number;
	srand(time(NULL));
	if(number == jackpot){
		cout << "you win" << endl;
	}
	else if(number > jackpot){
		cout << "Greater than the answer." << endl;
	}
	else if(number < jackpot){
		cout << "Smaller than the answer." << endl;
	}
	else{
		cout << "The number is greater." << endl;
	}
    return 0;
}
