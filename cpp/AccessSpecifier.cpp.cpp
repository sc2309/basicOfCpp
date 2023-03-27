#include <iostream>
using namespace std;

class MyClass {
	public:
	    
        void Func(string name){
    		cout << "Hi " << name << endl;
		}
    private:
    	int password;
    protected:
    	int age;
};

class Protect : public MyClass {
	public:
		void years(int age){                 //                       	//             : IS USED TO LINK OR MAKE A GROUP OF CLASS
			cout << "your age is " << age << endl;             //                       //     :: IS USED TO access A CONSTRUCTOR AND FUNCTION OUTSIDE A CLASS
		}
};

int main(){
	MyClass myObj1;
	myObj1.Func("Sarthak");
	
	Protect myObj2;
	myObj2.years(13);
	
	
	return 0;
}
