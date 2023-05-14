#include <iostream>
using namespace std;

int main(){
    string text1 = "abcd", text2 = "ef";
    char temp;

    /* cin >> text1;
    cout << endl;
    cin >> text2;*/

    cout << text1.size() << " " << text2.size() << endl;

    cout << text1 + text2 << endl;

    for(int i=0;i<=43;i++){
        cout << "\"-_";
    }
    cout << endl; 
    
    temp = text1[0];
    text1[0] = text2[0]; 
    text2[0] = temp;

    cout << text1 << endl << text2 << endl;

    return 0;
}