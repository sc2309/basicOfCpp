#include <iostream>
using namespace std;

class Variables {
	protected:
	    double c,f,a = 0.5666,b = 32;
};

class Process : public Variables {
	public:
		void calculate(){
			cout << "Please enter temperature in fahrenheit so that we can convert it into celsius" << endl;
			cin >> f;
			c = (f - b)*a;
			cout << endl << "The tmperature in degree celsius is " << c  << endl << "Thank You." << endl;
		}
};

int main(){
	Process Obj;
	Obj.calculate();
	
	return 0;
}
