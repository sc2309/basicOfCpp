#include <iostream>
int main()
{
    int choise = 0;
    std::cout << "Cafe Blend." << std::endl;
    std::cout << "Enter:" << std::endl << "1 - coffee." << std::endl << "2 - for tea." << std::endl << "3 - Pizza." << std::endl << "4 - Burger." << std::endl << "5 - Pasta." << std::endl << "6 - barito." << std::endl << "7 - Sandwhich." << std::endl << "8 - Panner Tikka." << std::endl << "9 - Manchurian." << std::endl << "10 - Taco." << std::endl;
    std::cin >> choise;
    if (choise == 1)
            {
             std::cout << "Your coffee is on its way.Thank you";
            }
    else if (choise == 2)
            {
             std::cout << "Your tea is on its way. Thank you";
            }
    else if ( choise == 3)
            {
            	std::cout << "Your Pizza Is On Its Way.Thank You";
			}
	else if ( choise == 4)
	        {
	        	std::cout << "Your Burger Is On Its Way.Thank You";
			}
	else if ( choise == 5)
	        {
	        	std::cout << "Your Pasta Is On Its Way.Thank You";
			}
	else if ( choise == 6)
	        {
	        	std::cout << "Your Barito Is On Its Way.Thank You";
			}
	else if ( choise == 7)
	        {
	        	std::cout << "Your Sandwhich Is On Its Way.Thank You";
			}
	else if ( choise == 8)
	        {
	        	std::cout << "Your Panner Tikka Is On Its Way.Thank You";
			}
	else if ( choise == 9)
	        {
	        	std::cout << "Your Manchurian Is On Its Way.Thank You";
			}
	else if ( choise == 10)
	        {
	        	std::cout << "Your Taco Is On Its Way.Thank You";
			}
    else    {
             std::cout << "No option by this number.";
            }
}
