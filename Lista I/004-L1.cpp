#include <iostream>
#include <locale.h>

int main()
{
    int year;
    int wage;

    std::cout << "XYZ Ltda." << std::endl;
    std::cout << "Digite Seu Tempo de Trabalho (Em Anos) Na Empresa:" << std::endl;
    std::cin >> year;

    std::cout << "Digite Seu Salário Atual:\nR$";
    std::cin >> wage;

    if(year >= 10)
    {
        int bonus, news;
        bonus = wage * 0.2;
        news = wage + bonus;
        std::cout << "Tempo de Trabalho: " << year << "Anos \nGratificação: R$" << bonus << "\nSalário Recebido: R$" << news << std::endl;
    }
    else
    {
        int bonus2, news2;
        bonus2 = wage * 0.1;
        news2 = wage + bonus2;
        std::cout << "\nTempo de Trabalho: " << year << " Anos \nGratificação: R$" << bonus2 << "\nSalário Recebido: R$" << news2 << std::endl;
    }

    return 0;
}