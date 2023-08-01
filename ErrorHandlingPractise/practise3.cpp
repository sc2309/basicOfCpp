#include <iostream>
using namespace std;

class Myclass{
    public:
        int password_space_check(string pass){
            bool check = true;
            for(int i = 1;i<=pass.size();i++){
                if(pass[i] == ' '){
                    
                    check = false;
                }
            }
            return check;
        }
        int password_check(string pass){
            try{
                bool check = password_space_check(pass);
                if(pass.size() < 7){
                    cout << "Password must contain 7 characters\n";
                }
                else if(check == false){
                    throw(pass);
                }
                else{
                    cout << "PASSWORD ACCEPTED!\n";
                }
            }
            catch(string password){
                cout << "It contains spaces\n";
            }
            return 0;
        }
};

int main(){
    string password;
    getline(cin,password);
    Myclass Obj;
    Obj.password_check(password);
    return 0;
}
