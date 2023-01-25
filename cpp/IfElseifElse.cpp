#include <iostream>
int main()
{
    int lap = 0;
    std::cout << "enter any number."<< std::endl;
    std::cin >> lap;
    if (lap > 5)
           {
            std::cout << "nice.";
           }
    else if (lap < 5)
           {
            std::cout << "No.";
           }
    else   {
            std::cout << "equal.";
           }
    return 0;
}
