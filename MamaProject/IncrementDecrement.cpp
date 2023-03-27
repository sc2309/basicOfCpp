#include <iostream>
using namespace std;

class Variables {
	protected:
	    int i = 57, z = 56 , y = 61, b = 60;
};

class Incremention : public Variables {
	public:
	    void Increment(){
	        for(int x = 1;x<=3;x++){
		    cout << "Incremented by 1 the value of " << z + x << " is " << i + x << endl;
	        }   
       }    
  };

class Decremention : public Variables {
	public:
		void Decrement(){
		for(int x = 1;x<=3;x++){
		    cout << "Decremented by 1 the value of " << y - x << " is " << b - x << endl;
		}
	}
};

int main(){
	Incremention Obj1;
	Obj1.Increment();
	Decremention Obj2;
	Obj2.Decrement();
	
	return 0;
}
