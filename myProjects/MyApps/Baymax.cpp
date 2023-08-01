#include <iostream>
#include <ctime>
using namespace std;

class Robot{
    protected:
        string query,ans,username;
    public:
        int intro(){
            cout << "Hello i am Baymax. Your personal talking assistant\n";
            getline(cin,username);
            cout << "Hello " << username;
            return 0;
        }
        int queryInput(){
            for(int i=0;i<=1000000;i++){
                getline(cin,query);
                if(query == "what is the time" || query == "what's the time" || query == "tell me time"){
                    time_t currentTime = time(0);
                    char* timeString = ctime(&currentTime);
                    cout << "Current time is: " << timeString << std::endl;
                }
                else if(query == ""){

                }
            }
        }
        
};

int main(){

    return 0;
}