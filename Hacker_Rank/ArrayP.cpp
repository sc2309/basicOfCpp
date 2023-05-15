#include <iostream>
using namespace std;

int main(){
    int size;
    int Num[size];
    cout << "Please enter array length\n";
    cin >> size;
    cout << "Please enter " << size << " numbers" << endl;
    for(int i=0;i<=size;i++){
        cin >> Num[i];
        cout << " ";
    }
    
    for(int i=size;i<=0;i--){
        cout << Num[i] << " ";
    }

    
    return 0;
}