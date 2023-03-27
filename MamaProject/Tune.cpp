#include <iostream>
#include <Windows.h>
#include "MMSystem.h"
using namespace std;


int main(){
	
	PlaySound(TEXT("song"),NULL,SND_SYNC);
	system("pause");
	
	return 0;
}
