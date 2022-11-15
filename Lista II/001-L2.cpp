#include <iostream>

int main()
{
    int valor = 1;
    while(valor <= 100 and valor >= 1)
    {
       std::cout << "Digite um número (1 a 100):" << std::endl;
       std::cin >> valor; 
    }

    return 0;
}