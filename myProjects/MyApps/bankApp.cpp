#include <iostream>
using namespace std;


int main(){
	int total;
	string transfer = "transfer",ch,view,am,no;
	cout << "welcome user." << endl << "Please tell what you want to do." << endl << "transfer" << endl << "view of total." << endl;
	cin >> ch;
	if(ch == transfer){
		cout << "please enter the amount you want to transfer." << endl;
		cin >> am;
		cout << "please enter the account number." << endl;
		cin >> no;
		cout << "the ammount has been transfered to the account." << endl;
	}
	else if(ch == view){
		cout << "The total amount of money is " << view << " Rupees" << endl;
	}
	else{
		cout << "Error! try again." << endl;
	}
	
	
	return 0;
}
