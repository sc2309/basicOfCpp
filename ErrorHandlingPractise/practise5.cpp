#include <iostream>
using namespace std;

int main(){
    cout << "Move 1 : Punch\nMove 2 : Kick\nMove 3: Action Beam\n";
    string move;
    getline(cin,move);
    try{
        if(move == "Punch"){
            cout << "-80 hearts";
        }
        else if(move == "Kick"){
            cout << "-100 hearts";
        }
        else if(move == "Action Beam"){
            cout << "-180 hearts";
        }
        else{
            throw(move);
        }
    }
    catch(string move){
        if(move == "1"){
            cout << "-80 hearts";
        }
        else if(move == "2"){
            cout << "-100 hearts";
        }
        else if(move == "3"){
            cout << "- 180 hearts";
        }
        else{
            cout << "not a move";
        }
    }
    return 0;
}