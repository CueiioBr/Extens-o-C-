/* Make a program in C++ for read two whole numbers any and print what their is bigger.
Atention: consider the possibility of the numbers being equals.

Faça um programa em C++ para ler dois números inteiros quaisquer e imprimir qual deles é o maior. 
Atenção considere a possibilidade dos números serem iguais. */


#include <iostream>

int main()
{
    int num, num_2;

    std::cout << "Digite Um Número: \n";
    std::cin >> num;
    std::cout << "Digite Outro Número: \n";
    std::cin >> num_2;

    if(num > num_2)
    {
        std::cout << num << " É Maior Que " << num_2 << std::endl;
    }
    else if(num < num_2)
    {
        std::cout << num_2 << " É Maior Que " << num << std::endl;
    }
    else
    {
        std::cout <<"\nSão Números Iguais" << std::endl;
    }

    return 0;

}
