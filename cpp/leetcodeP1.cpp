#include <iostream>
using namespace std;

int main(){
    int nums[] = {2,7,11,15};
    int target = 9;
    int temp;

    for(int i=0;i<=4;i++){
        for(int j=i+1;j<=4;j++){
            temp = nums[i] + nums[j];
            if(temp == target){
                cout << i << "," << j;
            }
        }
    }
    return 0;
}