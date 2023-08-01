#include <iostream>
#include <string>
using namespace std;

class Myclass{
    public:
        int exception(int ssize, long arr[]){
            int count = 1;
            for(int i=1;i<=ssize;i++){
                try{
                    string a = to_string(arr[i]);
                    long s = a.size();
                    if(arr[i] < 0){
                        throw(arr);
                    }
                    else if(s > 8){
                        cout << "Not Enough Memory!\n";
                    }
                    else{
                        cout << "Fine!\n";
                    }
                }
                catch(long arr[]){
                    cout << count << ". is negative\n";
                    count++;
                }
                count++;
            }
            return 0;
        }
};

int main(){
    Myclass Obj;
    int size;
    cin >> size;
    long arr[size];
    for(int i=1;i<=size;i++){
        cin >> arr[i];
    }
    for(int i=1;i<=80;i++){
        cout << "-";
    }
    cout << endl;
    Obj.exception(size, arr);
    return 0;
}