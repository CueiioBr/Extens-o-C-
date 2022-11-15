#include <iostream>

int main()
{
    int ramo = 0;

    std::cout << "Digite a quantidade de ramos:" << std::endl;
    std::cin >> ramo;
    std::cout << "\n";
    for(int i = 1; i <= ramo; i++)
    {
        for(int j = ramo - i; j >= i; j--) // Imprime os Espaços
            std::cout << "";
        for(int j = 1; j <= i; j++) // Imprime os '*'
            std::cout << "*";
        std::cout << "\n";
    }

    return 0;
}