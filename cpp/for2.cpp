#include <iostream>
int main() 
{
    int sum = 0;
    for (int i = 1; i<=10; i++)
    {
	    sum += 1; //same as sum = sum +1    
    }
    std::cout << "sum of 1 to 10 = " <<sum <<std::endl;
    return 0;
}
