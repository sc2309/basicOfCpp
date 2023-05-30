#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;

class EnergyMoves{
    protected:
        int HeroHealth,VillianHealth = 200,BossHP = 500,damage,moveNum,moveCount = 0,charc;
        string Villian,Boss,name,startChoise,moves;
    public:
        int start(){
            cout << "Welcome Player please enter you name:- ";
            cin >> name;
            cout << "Please select you character by number " << name << "\n1.Nu Hai\n2.Fan Tong\n3.Po\n4.Blue Dragon\n5.Bao\n6.Jing\n7.White Tiger\n8.Red Phoenix\n9.Black Tortoise\n" << endl;
            cin >> charc;
            VIllian();
            return 0;
        }
        int HEROhealth(){
            int CHARACTER = charc;
            if(CHARACTER == 1){
                HeroHealth = 300;
            }
            else if(CHARACTER == 2){
                HeroHealth = 300;
            }
            else if(CHARACTER == 3){
                HeroHealth = 350;
            }
            else if(CHARACTER == 4){
                HeroHealth = 500;
            }
            else if(CHARACTER == 5){
                HeroHealth = 300;
            }
            else if(CHARACTER == 6){
                HeroHealth = 300;
            }
            else if(CHARACTER == 7){
                HeroHealth = 500;
            }
            else if(CHARACTER == 8){
                HeroHealth = 490;
            }
            else if(CHARACTER == 9){
                HeroHealth = 510;
            }
            else{
                HeroHealth = 300;
            }
            return HeroHealth;
        }
        string VIllian(){
            int Vill = 1;//rand() % 5;
            int HeroHealth2 = HEROhealth();
            if(Vill == 1){
                if(moveCount == 0){
                    cout << "Your Opponent is Teracota Soilder(TS) with " << VillianHealth << " HP Match Starts\n\n";
                }
                for(int i = 1;i<=10000;i++){
                    HeroHealth = HeroHealth - 5;
                    moveCount = 0;
                    cout << "TS has punched you\n\n Your HP is " << HeroHealth2 << " Your Turn ";
                    moveCount = 1;
                    if(moveCount == 1){
                        Moves();
                        break;
                    }
                }
            }
            else if(Vill == 2){
                cout << "Your opponent is Shilong";
            }
            else if(Vill == 3){
                cout << "Your opponent is Evil Deer Soilders";
            }
            else if(Vill == 4){
                cout << "Your opponent is White Bone Witch";
            }
            else{
                cout << "Your opponent is Jindiao";
            }
            string RVill = to_string(Vill);
            return Villian;
        }
        int CharT(){
            int User = charc;
            if(User == 1)
                cout << "You are Nu Hai with the powers of the leader Blue dragon\nYour opponent is " << Villian << " Defeat him up with the powers of Blue Dragon.\n\n\n";
            return 0;
        }
        int Moves(){
            string villianC = VIllian();
            if(moveCount == 0){
                CharT();
            }
            for(int i = 0;i<=10000;i++){
                moveCount = 0;
                cout << "\nEnter your move by the number\n1.Kick\n2.Punch\n3.Energy Blast\n4.Energy Beam\n5.Blue Arrow\n6.Pheonix Sword\n\n";
                cin >> moveNum;
                if(moveNum == 1){
                    VillianHealth = VillianHealth - 8;
                    cout << "\nKICK!\n\nDamage of -8HP\n\nNow the " << villianC << " HP is " << VillianHealth << endl << endl;
                }
                else if(moveNum == 2){
                    VillianHealth = VillianHealth - 6;
                    cout << "\nPUNCH!\n\nDamage of -6HP\n\nNow the " << villianC << " HP is " << VillianHealth << endl << endl;
                }
                else if(moveNum == 3){
                    VillianHealth = VillianHealth - 20;
                    cout << "\nBOOOM! A powerful blast with -20HP\n\nNow the " << villianC << " HP is " << VillianHealth << endl << endl;
                }
                else if(moveNum == 4){
                    VillianHealth = VillianHealth - 39;
                    cout << "\nBeam Of energy of -39HP\n\nNow the " << villianC << " HP is " << VillianHealth << endl << endl;
                }
                else if(moveNum == 5){
                    VillianHealth = VillianHealth - 45;
                    cout << "\nArrow in the body with -45 HP\n\nNow the " << villianC << " HP is " << VillianHealth << endl << endl;
                }
                else if(moveNum == 6){
                    VillianHealth = VillianHealth - 75;
                    cout << "\nA cut from red sword with -75 HP\n\n Now the " << villianC << " HP is " << VillianHealth << endl << endl;
                }
                else{
                    cout << "" << endl;
                }
                moveCount = 1;
                if(VillianHealth == 0 || VillianHealth < 0){
                    start();
                }
                if(moveCount == 1){
                    VIllian();
                    break;
                }
            }
            return 0;
        }
};

int main(){
    EnergyMoves Game;
    Game.start();

    return 0;
}