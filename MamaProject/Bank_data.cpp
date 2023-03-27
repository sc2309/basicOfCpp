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
	string a,b,c;
	cout << "Please enter your name(with an underscore where there are spaces):- " ;
			cin >> b;
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
	
	return 0;
}
