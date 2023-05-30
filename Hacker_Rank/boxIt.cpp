#include <iostream>
using namespace std;

class Box{
    private:
        float l,b,h;
    public:
        
        int getlength(){
            cin >> l;
            return l;
        }
        int getbreadth(){
            cin >> b;
            return b;
        }
        int getheigth(){
            cin >> h;
            return h;
        }
        int volumeCalculator(){
            int vol = l*b*h;
            return vol;
        }
        int Box2(){
            float length,breadth,height;
            h = height;
            l = length;
            b = breadth;
            float volume = length*breadth*height;
            return volume;
        }
        bool OPerator(){
            int volume = volumeCalculator();
            float volume2 = Box2();
            if(volume > volume2){
                return true;
            }
            else if(volume == volume2){
                cout << "Equal\n";
            }
            else{
                return false;
            }
        }
};

int main(){
    Box b;
    b.getlength();
    b.getbreadth();
    b.getheigth();
    cout << b.volumeCalculator() << endl;
    cout << b.OPerator() << endl;


    return 0;
}