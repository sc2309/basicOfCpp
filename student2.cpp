#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void head(){
	
}

int main(){
	int no[5];
	string s[5];
	int l = sizeof(no) / sizeof(no[0]);
	cout << "Please enter the roll no.s with name and this wil sort them " << endl;
	for(int i=0;i<5;++i){
		cin >> no[i] ;
		cout << endl;
		cin >> s[i];
	}
	sort(no,no+l);
	cout << endl;
	for(int i=0;i<5;++i){
		cout << "the roll no. is " << no[i] << " and the name is " << s[i] << endl;
	}
	
	return 0;
}
