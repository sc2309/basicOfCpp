#include <iostream>
using namespace std;

class library {
    public:
        string book_name,user_name,email;
        long book_no,credits,credit_card_num,amount,a=5,money,c,k;
        void libToken(){
            cout << "1 token may cost " << a << " rupees.\n";
            cout << "Please enter the amount of token you want:- ";
            cin >> amount;
            c = amount*a;
            cout << "This may cost you " << c << " rupees.";
            cout << "please enter your credit card number\n";
            cin >> credit_card_num;
            cout << "Please enter the money:- ";
            cin >> money;
            if(money < c){
                k = c - money;
                cout << "the amount is less by " << k << " please play the left\n";
                cin >> money;
                if(money < k){
                    cout << "the money is less by " << k - money << "please pay correctly your we will call police\n";
                }
                else{
                    cout << "you have been successfully transfered " << amount << " libTokens\n";
                    for(int i=1;i<=amount;i++){
                        amount++;
                    }
                }
            }
            else{
                    cout << "you have been successfully transfered " << amount << " libTokens\n";
                    for(int i=1;i<=amount;i++){
                        amount++;
                    }
                }
        }
        void addition(){
            cout << "Please enter the book name" << endl;
            getline(cin,book_name);
            cout << "Please enter 3 digit book number\n";
            cin >> book_no;
            cout << "Thank you\n";
            }
        void subtraction(){
            cout << "Please enter the book name" << endl;
            getline(cin,book_name);
            cout << "Please enter 3 digit book number(001 - 999)\n";
            cin >> book_no;
            if(book_no < 100){
                cout << "50 lib tokens has been deducted from the account\n";
                if(amount > 100){
                    for(int i=1;i<=50;i++){
                        amount--;
                    }
                }
                else{
                    cout << "sorry you can't afford it now\nWe suggest you to buy lib tokens\n";
                }
            }
            else if(book_no < 200){
                cout << " ";
            }
        }
};  

int main(){
    string user_choise,user;
    library Obj1;
    cout << "Please enter your name:- ";
    getline(cin,user);
    cout << "Please enter your operation\nbuy lib tokens\nreturn book\nborrow book\n";
    getline(cin,user_choise);
    if(user_choise == "buy lib tokens"){
        Obj1.libToken();
    }
    else if(user_choise == "return book"){
        Obj1.addition();
    }
    else{

    }

    return 0;
}