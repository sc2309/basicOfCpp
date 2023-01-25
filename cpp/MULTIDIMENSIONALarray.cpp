#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  
  cout << letters[0][5];// OUTPUT IS 5 BECAUSE A=0,B=1,C=2,D=3,E=4,F=5.
  return 0;
}

