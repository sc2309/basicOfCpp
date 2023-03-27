#include <iostream>
using namespace std;

class Car {
  public:
    int add(int x, int y);
};

int Car::add(int x, int y) {
  cout << x + y;
  return 0;
}

int main() {
  Car myObj;
  int a,b;
  cout << "please enter two numbers. " << endl;
  cin >> a;
  cin >> b;
  myObj.add(a, b);
  return 0;
}

