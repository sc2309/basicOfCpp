#include <iostream>
using namespace std;

class Var {
	protected:
		int hrs1,min1,hrs2,min2,hrsm1,hrsm2,min,a = 60;
};

class Process : public Var {
	public:
		void calculation(){
			cout << "1.a. User Please give us time in hours  " << endl;
		    cin >> hrs1;
	        cout << endl << "1.b. User Please give us time in minutes" << endl ;
		    cin >> min1;
		    cout << endl << "2.a. User Please give us time in hours" << endl;
		    cin >> hrs2;
	    	cout << endl << "2.b. User Please give us time in minutes" << endl;
    		cin >> min2;
	    	cout << endl;
	    	
	    	hrsm1 = hrs1 * a;
	    	hrsm1 = hrsm1 + min1;
	    	
	    	hrsm2 = hrs2 * a;
	    	hrsm2 = hrsm2 + min2;
	    	
	    	if(hrsm1 > hrsm2){
	    		cout << "The minutes between " << hrs1 << ":" << min1 << "to " << hrs2 << ":" << min2 << " is " << hrsm1 - hrsm2 << endl;
			}
			else if(hrsm1 < hrsm2){
				cout << "The minutes between " << hrs1 << ":" << min1 << "to " << hrs2 << ":" << min2 << " is " << hrsm2 - hrsm1 << endl;
			}
			else{
				cout << "Sorry an unknown error!" << endl;
			}
		}
		
};

int main(){
	Process Obj1;
	Obj1.calculation();
	cout << "Thank You" << endl;
}
