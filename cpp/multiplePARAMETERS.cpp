#include <iostream>
using namespace std;

void anot_func(string Lname,int age){
	cout << Lname << "Rai. " << age << " years old." << endl ;
}

int main(){
	anot_func("Virat", 13 );
	anot_func("Samrat", 18 );
	anot_func("Mukesh", 35 );
	anot_func("Mona", 40 );
	return 0;
}
