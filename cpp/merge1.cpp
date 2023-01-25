#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
	vector<int> roll;
	roll = {4,1,7,2,9};
	vector<int> arr2;
	arr2 = {5,2,6,8,0};
	
	cout << "The numbers without merging" << endl ;
	for(int i = 0;i<5;i++){
	    cout << roll << " " << arr2 << " " ;
	}
	sort(roll.begin(), roll.end());
	sort(arr2.begin(), arr2.end());
	cout << "After arranging and merging them." << endl ;
	merge(roll.begin(), roll.end(), arr2.begin(), arr2.end());
	for(int i = 0;i<5;i++){
	    cout << roll[i] << " " << arr2[i] << " " ;
	}
	
	return 0;
}
