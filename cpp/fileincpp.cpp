#include <iostream>
#include <fstream>
using namespace std;


int main(){
	ofstream MyFile("file.txt");
	MyFile << "Goodnight or drink coffee!";
	MyFile.close();
	
	string text;
	ifstream MyReadFile("file.txt");
	while( getline (MyReadFile,text)){
		cout << text;
	}
	MyReadFile.close();
	
	return 0;
}
