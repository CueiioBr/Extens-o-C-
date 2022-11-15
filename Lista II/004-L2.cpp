#include <iostream>

int main()
{

    for(int i = 1; i <= 5; i++)
    {
        std::cout << "Tabuada do " << i << "\n" << std::endl;
        for(int h = 1; h <= 10; h++)
        std::cout << i << " x " << h << " = " << i * h << std::endl;
        std::cout << "\n";
    }

    return 0;
}