#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Please enter marks:- ";
    cin >> num;
    try{
        if(num > 100){
            throw(num);
        }
        else{
            if(num >= 0 && num <= 33){
                cout << "F\n";
            }
            else if(num >= 34 && num <= 58){
                cout << "C\n";
            }
            else if(num >= 59 && num <= 79){
                cout << "B\n";
            }
            else{
                cout << "A\n";
            }
        }
    }
    catch(int mmks){
        cout << "ERROR: Marks cant be more than 100.\n";
    }
    return 0;
}