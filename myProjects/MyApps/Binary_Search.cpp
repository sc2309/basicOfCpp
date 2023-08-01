#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Search{
    public:
        int SearchA(int x,int arr[11],int mid,int low,int high){
            while(low <= high){
                mid = low + (low - high) / 2;
                if(x == arr[mid]){
                    return mid;
                }
                if(x > arr[mid]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            return -1;
        }
};

int main(){
    Search s;
    int mid,x = 4,low,high;
    //cin >> x;
    int arr[11] = {3,7,5,2,9,6,8,4,1,0,11};
    low = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    high = n;
    s.SearchA(x,arr,mid,low,high);
    return 0;
}