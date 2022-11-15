#include <iostream>

int main()
{
    int num;

    std::cout << "Digite um número:" << std::endl;
    std::cin >> num;

    if(num % 2 == 0)
    {
        std::cout << "\nEsse Número é Par.\n" << std::endl;
    }
    else
    {
        std::cout << "\nEsse Número é Ímpar.\n" << std::endl;
    }

    return 0;
}