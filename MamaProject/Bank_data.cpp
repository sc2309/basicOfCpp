#include <iostream>
using namespace std;

class Banks {
	private:
		int account;
		string password,username,DOB,contact_number;
	public:
		void personal_info(int account2, string password2, string username2, string DOB2, int Co_No){
			account = account2;
			password = password2;
			username = username2;
			DOB = DOB2;
			contact_number = Co_No;
			
			cout << "Accout has been created" << endl;
		}
};

int main(){
	Banks obj1;
	int x,z;
	string a,b,c,choise;
	cout << "Hello user please tell us your operation:\ncreate account\ntransfer of money\nInsurance\nLoan\nclose\n";
	getline(cin,choise);
	if choise == "create account"{
		cout << "Please enter your name:- " ;
		getline(cin,b);
		cout << endl << b << " please tell us you account number :- " ;
		cin >> x;
		cout << endl << b << " please tell us your account password :- " ;
		cin >> a;
		cout << endl << b << " please tell us your DOB(date of birth) :- " ;
		cin >> c;
		cout << endl << b << " please tell us your contact number :- " ;
		cin >> z;
		cout << endl;
		obj1.personal_info(x,a,b,c,z);
	}
	else if(choise == "transfer of money"){
		cout << "please enter the amount you want to transfer." << endl;
		cin >> am;
		cout << "please enter the account number." << endl;
		cin >> no;
		cout << "the ammount has been transfered to the account." << endl;
	}
	else if(choise == "Insurance"){

	}
	else if(choise == "loan"){
		
	}
	else if(choise == "close"){
		cout << "Hope we will see you soon!";
	}
	else{
		cout << "An error occured!";
	}
	return 0;
}
