#include <iostream>
int main()
{
	int count = 1, sum = 0;
	while(count <= 10)
	      { sum += count;
	        count = count + 1;
		  }
    std::cout << " The Sum Of 1 To 10 = " << sum <<std::endl;
    std::cout << "Work Is Done";
    return 0;
}
