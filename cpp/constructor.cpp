#include <iostream>
using namespace std;

class Myclass {
	public:
		string y;
		int x;
	    Myclass(string name,int age){
	        y = name;
	        x = age;
		}
};

/*Myclass::Myclass(string name,int age){
    
}
*/
int main(){
	Myclass Myobj1("Virat",10);
	cout << "sorry " << Myobj1.y << " your cannot vote because your age is " << Myobj1.x << endl;
	Myclass Myobj2("PELE",45);
	cout << "Yes! " << Myobj2.y << " you are eligible to vote because your age is " << Myobj2.x  << endl;
	
	return 0;
}
