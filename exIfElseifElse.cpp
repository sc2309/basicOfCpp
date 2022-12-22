#include <iostream>
int main()
{
    int choise = 0;
    std::cout << "Enter:" << std::endl << "1 - coffee." << std::endl << "2 - for tea." <<std::endl;
    std::cin >> choise;
    if (choise == 1)
            {
             std::cout << "Your coffee is on its way.Thank you";
            }
    else if (choise == 2)
            {
             std::cout << "Your tea is on its way. Thank you";
            }
    else    {
             std::cout << "No option by this number.";
            }
}
