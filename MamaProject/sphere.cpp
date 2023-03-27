#include <iostream>
#include <cmath>
using namespace std;

class Variables {
	protected:
	    float a = 1.333,r,volume,pi = 3.1415;
	    string length;
};

class Process : public Variables {
	public:
	    void calculate(){
		    cout << "Please enter radius of sphere :-";
		    cin >> r;
		    cout << endl << "please enter the unit of measurement of radius(meter,centimeter,kilometer,etc)" << endl;
		    cin >> length;
		    volume = a*pi*r*r*r;
		    cout << "The volume of sphere is " << volume << " " << length << endl;
	    }
};

int main(){
	Process Obj;
	Obj.calculate();
	
	return 0;
}
