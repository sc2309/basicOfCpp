#include <iostream>
using namespace std;

int main(){
    string name;
    cin >> name;
    try{
        if(name[0] == 'W' || name[0] == 'w'){
            throw(name);
        }
        else{
            cout << "nice name";
        }
    }
    catch(string name2){
        cout << "hey user there was an error with input";
    }
    return 0;
}