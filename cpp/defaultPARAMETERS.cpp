#include <iostream>
using namespace std;

void anot_func(string country = "India"){
	cout << country << endl;
}

int main(){
	anot_func("USA");
	anot_func();
	anot_func("Russia");
	anot_func("Japan");
	return 0;
}
