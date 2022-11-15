#include <iostream>

int main()
{
    int extra, miss;

    std::cout << "Empresa Bons Amigos" << std::endl;
    std::cout << "Digite o número de horas extras trabalhadas:" << std::endl;
    std::cin >> extra;

    std::cout << "Digite o número de horas faltadas no trabalho:" << std::endl;
    std::cin >> miss;

    int total;
    total = (extra - (2 / 3 * miss));

    if(total > 40)
    {
        std::cout << "O funcionário receberá R$200,00 de gratificação de Natal." << std::endl;
    }
    else if(total > 30 and total <= 40)
    {
        std::cout << "O funcionário receberá R$175,00 de gratificação de Natal." << std::endl;
    }
    else if(total > 20 and total <= 30)
    {
        std::cout << "O funcionário receberá R$150,00 de gratificação de Natal." << std::endl;
    }
    else if(total > 10 and total <=20)
    {
        std::cout << "O funcionário receberá R$125,00 de gratificação de Natal." << std::endl;
    }
    else
    {
        std::cout << "O funcionário receberá R$100,00 de gratificação de Natal." << std::endl;
    }

    return 0;
}