#include <iostream>
using namespace std;

class Student{
    private:
        int age,standard;
        string firstn,lastn;
    public:
        int input(){
            for(int i=0;i<=79;i++){
                cout << "-";
            }
            cout << endl;
            cin >> age;
            cin >> firstn;
            cin >> lastn;
            cin >> standard;
            for(int i=0;i<=79;i++){
                cout << "-";
            }
            cout << endl;
            cout << age << endl << lastn << "," << firstn << endl << standard << endl << endl;
            cout << age << "," << firstn << "," << lastn << "," << standard;
        }
};

int main(){
    Student st;
    st.input();

    return 0;
}