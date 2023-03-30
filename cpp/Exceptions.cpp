#include <iostream>
using namespace std;

class Exception {
	public:
		void MyFunction(){
	        try{
		        int count;
        		cout << "Please enter how many times com[puter has to write \"JAI SHREE RAM\": ";
	          	cin >> count;
		        if(count > 100){
		            for(int i=1;i<=count;i++){
			            cout << i << ".JAI SHREE RAM" << endl;
		            }
	            }
	            else{
		            throw(count);
		        }
	        }
	        catch(int num){
		        for(int i=1;i<=num;i++){
	        		cout << i << ".Jai Shree Ram" << endl;
	        	}
        	}
        }
};

int main(){
	Exception Obj1;
	Obj1.MyFunction();
	
	return 0;
}
