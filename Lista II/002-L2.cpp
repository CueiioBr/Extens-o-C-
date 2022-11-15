#include <iostream>

int main()
{
    int num = 5;
    std::cout << "Tabuada do 5\n" << std::endl;
    for(int i = 1; i<=10; i++)
    {
        std::cout << num << " x " << i << " = " << num * i << std::endl;
    }

    return 0;

}