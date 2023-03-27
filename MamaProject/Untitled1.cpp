#include <iostream>
using namespace std;

class Process {
	public:
		void Function(){
		    int arr[5];
		    cout << "please enter 5 nums." << endl;
		    for(int i=1;i<=5;i++){
		        cin >> arr[i];
		    }
	        for(int i=1;i<=75;i++){
		        cout << "-";
	        }
	        cout << endl;
	        for(int i=0;i<=5;i++){
	    	    for(int j=i+1;j<=5;j++){
	        		if(arr[i] == arr[j]){
	         			cout << arr[i] << endl;
        			}
	        	}
	        }
        }
};

int main(){
	Process Obj1;
	Obj1.Function();
	
	return 0;
}
