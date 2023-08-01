#include <iostream>
#include <fstream>
using namespace std;

class Form{
    public:
        int check(){
            cout << "Looks like you want check your password press y for yes and n for no\n";
            char confirm;
            cin >> confirm;
            if(confirm == 'y'){
                ifstream UserRFileE("Email.xlsx");
                ifstream UserRFileP("pass.xlsx");
                string pass2,email2;
                cout << "Email: ";
                while(getline(UserRFileE,email2)){
                    cout << email2;
                }
                cout << endl << "Password: ";
                while(getline(UserRFileP,pass2)){
                    cout << pass2;
                }
                UserRFileE.close();
                UserRFileP.close();
            }
            else{
                cout << "checking password was cancelled by the user\n";
            }
            return 0;
        }
        int sign_up(){
            ofstream UserFileE("Email.xlsx");
            ofstream UserFileP("pass.xlsx");
            string email,pass;
            cout << "Please enter your email\n";
            cin >> email;
            cout << "Please enter your password\n";
            cin >> pass;
            UserFileE << email;
            UserFileP << pass;
            UserFileE.close();
            UserFileP.close();
            return 0;
        }
};

int main(){
    Form Opr;
    cout << "Please choose your operation: Password check or Sign Up\n";
    string inp;
    getline(cin,inp);
    if(inp == "Password Check" || inp == "password check"){
        Opr.check();
    }
    else if(inp == "Sign Up" || inp == "sign up"){
        Opr.sign_up();
    }
    else{
        cout << ":| error occured consider typing \"Password Check\" or \"password check\" or \"Sign Up\" or \"sign up\"";
    }
    return 0;
}