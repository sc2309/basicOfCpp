#include <iostream>
using namespace std;

class Myclass{
    public:
        int ValidCheck(string name){
            bool x = true;
            char c = name[0];
            if(c == 'F' || c == 'W' || c == 'f' || c == 'w'){
                x = false;               //        if name starts with F or f or W or w itwill show invalid
            }
            return x;
        }
        int Exception_Handling(string name){
            try{
                bool check = ValidCheck(name);
                if(name.size() <= 2){
                    cout << "Too Short: " << name.size() << endl;        //   if name length is less than 2
                }
                else if(check == false){
                    cout << "Invalid Name\n";    //    prints invalid
                }
                else{
                    throw(name);   
                }
            }
            catch(string n){
                cout << "VALID!\n";        //    prints valid when a name passes all the test
            }
            return 0;
        }
};

int main(){
    Myclass Obj;
    string name;
    getline(cin,name);
    Obj.Exception_Handling(name);
    return 0;
}