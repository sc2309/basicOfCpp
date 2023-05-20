#include <iostream>
using namespace std;
string text = "world 2";
string name(string name){
    name = "hello world";
    cout << name;
}

int main(){
    name(text);
    cout << text;

    return 0;
}