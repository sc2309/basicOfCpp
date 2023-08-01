#include <iostream>
using namespace std;

void myfunction (string food[10], string search){
	for (int i=1;i<=10;i++)
		{
		if(search == food[i])
		{
			cout << search << " is an array index "<< i + 1 << endl;
		}
	}
}

int main (){
	string food[10]={"Pizza","Sandwich","Chinese","Manchurian","Fried Rice","Pasta","Burger","Momos","Chilli Potato","Paneer 65"},search;
	cout<<"Input array element you want to search"<<endl;
	getline(cin,search);
	myfunction(food,search);
	
return 0;
}