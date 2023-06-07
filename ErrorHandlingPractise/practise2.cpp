#include <iostream>
using namespace std;

class Myclass{
    public:
        int ValidCheck(string name){
            bool x = true;
            char c = name[0];
            if(c == 'F' || c == 'W'){
                x = false;
            }
            return x;
        }
        int Exception_Handling(string name){
            try{
                bool check = ValidCheck(name);
                if(name.size() <= 2){
                    cout << "Too Short: " << name.size() << endl;
                }
                else if(check == false){
                    cout << "Invalid Name\n";
                }
                else{
                    throw(name);
                }
            }
            catch(string n){
                cout << "VALID!\n";
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