#include <iostream>
int main()
{
    int tic = 0, val = 0;
    if(std::cin >>  tic)
    {
        int tac = 1;
        while (std::cin >> val)
        {
            if (val == tic)
                ++tac;
            else{
                std::cout << tic << " occurs " << tac << " times " << std::endl;
                tic = val;
                tac = 1;
            }
        }
        std::cout << tic << " occurs " << tac << " times " << std::endl;
    }
    return 0;
}
