#include <iostream>

int main()
{
    int Account;
    float SaldoI, TotalC, TotalCE, Limite;

    std::cout << "Banco IFPE" << std::endl;
    std::cout << "Digite o número da sua conta:" << std::endl;
    std::cin >> Account;
    std::cout << "Digite o saldo inicial da sua conta:" << std::endl;
    std::cin >> SaldoI;

    std::cout << "Digite o valor da fatura do mês atual:" << std::endl;
    std::cin >> TotalC;
    std::cout << "Digite o valor de créditos colocados na conta:" << std::endl;
    std::cin >> TotalCE;
    std::cout << "Digite o limite de créditos da sua conta:" << std::endl;
    std::cin >> Limite;

    float exceeded = SaldoI + (TotalC - TotalCE), remain = Limite - exceeded;

    if(exceeded > Limite)
    {
        std::cout << "Número da Conta: " << Account << std::endl;
        std::cout << "Limite de Crédito: " << Limite << std::endl;
        std::cout << "Saldo Total: " << exceeded << std::endl;
        std::cout << "Limite de Crédito Excedido." << std::endl;
    }
    else
    {
        std::cout << "Número da Conta: " << Account << std::endl;
        std::cout << "Limite de Crédito: " << Limite << std::endl;
        std::cout << "Saldo Total: " << exceeded << std::endl;
        std::cout << "Limite de Crédito Sobrando: " << remain << std::endl;
    }

    return 0;
}