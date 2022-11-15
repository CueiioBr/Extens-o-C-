#include <iostream>

int main()
{
    int num, maior = 0; 

    for(int c = 1; c<=10; c++)
    {
        std::cout << "Digite o " << c << "° Número:" << std::endl;
        std::cin >> num;

        if(num > maior)
            maior = num;

    }
    std::cout << "O Maior Número é: " << maior << std::endl;

    return 0;
}
