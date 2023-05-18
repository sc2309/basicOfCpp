#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

// v7 successful "to be added obstacles"

class Drunk_man{
    private:
        string diff,choise,enter;                  //   here 'diff' is difficulty
        int randSteps,target,rand_Obs,obsCount,left,age,Obs_choise;   // here 't' is the target and rand_Obs is a random obstacle  
        string ins = "Please press a\n";
        string help = "\n\n\nWe will generate a random number which will be your steps >=6\nWe will give you a target and you have to achieve this\nAnd there will be some obstacles \nEg. go left or right in one of these there are bombs\nIf you go in that path you will lose if you go in correct you will win\nPress a to continue\n\n";
    public:
        int start(){
            cout << help;
            cout << "Please enter your age:-\n\n";
            cin >> age;
            if(age >= 7){
                DifficultySelector();
            }
            else{
                cout << "Not for your age\n";
            }
            return 0;
        }
        int DifficultySelector(){
            cout << "Hello user please select the difficulty:-\neasy\nmedium\nhard\n\n";
            cin >> choise;
            if(diff == "easy"){
                showTarget();
                cout << ins;
                cin >> enter;
                stepGenerater();
                }
            else if(diff == "medium"){
                showTarget();
                cout << ins;
                cin >> enter;
                stepGenerater();
            }
            else if(diff == "hard"){
                showTarget();
                cout << ins;
                cin >> enter;
                stepGenerater();
            }
            else{
                cout << "An error occured\n\n";
            }
            return 0;
        }
        int showTarget(){
            srand(time(NULL));
            if(diff == "easy"){
                target = (rand() % ( 50 - 25 + 1)) + 25;
                cout << target << " is your step target\n\n";
            }
            else if(diff == "medium"){
                target = (rand() % ( 75 - 50 + 1)) + 50;
                cout << target << " is your step target\n\n";
            }
            else if(diff == "hard"){
                target = (rand() % ( 100 - 75 + 1)) + 75;
                cout << target << " is your step target\n\n";
            }
            else{
                cout << " " << endl;
            }
        
        return 0;
        }
        int stepGenerater(){
            for(int i=1;i<=1000;i++){
                randSteps = (rand() % (6 - 1 + 1) + 1);
                cout << randSteps << " steps\n\n";
                target = target - randSteps;
                cout << "current target is "<< target << "\n\nplease press a";
                cin >> enter;
                if(target == 0){
                    cout << "\n\n--- YOU WIN ---\n\n";
                    break;
                }
            }

            return 0;
        }
        int obstacle(){
            if(diff == "easy"){
                obsCount = 1;
                rand_Obs = (rand() % (2 - 1 + 1)) + 1;
                cout << "\n\nplease choose 1 for left and 2 for right\n\n";
                cin >> Obs_choise;
                if(Obs_choise == rand_Obs){
                    stepGenerater();
                }
                else{
                    cout << "you lose\n";
                }
            }
            else if(diff == "medium"){

            }

            return 0;
        }
};

int main(){
    Drunk_man Race_Start;
    Race_Start.start();

    return 0;
}