#include <iostream>

int main()
{
    int num = 0;

    std::cout << "Digite um número para descobrir sua tabuada:" << std::endl;
    std::cin >> num;

    std::cout << "Tabuada do " << num << "\n" << std::endl;

    for(int i = 1; i <= 10; i++)
    std::cout << num << " x " << i << " = " << num * i << std::endl;

    return 0;
}